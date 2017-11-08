#pragma once

#include <windows.h>

template <typename C>
class UniqueHandle
{
private:
	HANDLE m_val;

	void Close()
	{
		if (*this)
		{
			C::Exit(m_val);
		}
	}

public:
	// ���� ���� ������
	UniqueHandle(UniqueHandle const &) = delete;
	auto operator=(UniqueHandle const &)->UniqueHandle & = delete;

	// ������
	explicit UniqueHandle(HANDLE value = C::Invalid()) :
		m_val{ value }
	{
	}

	// �̵� ������
	UniqueHandle(UniqueHandle && other) :
		m_val{ other.Release() }
	{
	}

	// �̵� ���� ������
	auto operator=(UniqueHandle && other) -> UniqueHandle &
	{
		if (this != &other)
		{
			Reset(other.Release());
		}

		return *this;
	}

	// �Ҹ���
	~UniqueHandle()
	{
		Close();
	}

	// ���ϼ� �˻縦 ���� bool ������
	explicit operator bool() const
	{
		return m_val != C::Invalid();
	}

	// HANDLE ���� ��� ���� �Լ�
	HANDLE Get() const
	{
		return m_val;
	}

	// HANDLE�� �����ϱ� ���� �Լ�
	HANDLE Release()
	{
		auto value = m_val;
		m_val = C::Invalid();
		return value;
	}

	// HANDLE�� �����ϴ� �Լ�
	bool Reset(HANDLE value = C::Invalid())
	{
		if (m_val != value)
		{
			Close();
			m_val = value;
		}

		return static_cast<bool>(*this);
	}
};

template <typename C>
auto swap(UniqueHandle<C> & left,
	UniqueHandle<C> & right) throw() -> void
{
	left.swap(right);
}

template <typename C>
auto operator==(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() == right.Get();
}

template <typename C>
auto operator!=(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() != right.Get();
}

template <typename C>
auto operator<(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() < right.Get();
}

template <typename C>
auto operator>=(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() >= right.Get();
}

template <typename C>
auto operator>(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() > right.Get();
}

template <typename C>
auto operator<=(UniqueHandle<C> const & left,
	UniqueHandle<C> const & right) throw() -> bool
{
	return left.Get() <= right.Get();
}

struct NullHandleCharacteristics
{
	// �߸��� HANDLE�̸� nullptr�� ��ȯ
	static HANDLE Invalid()
	{
		return nullptr;
	}

	// HANDLE ����
	static void Exit(HANDLE val)
	{
		CloseHandle(val);
	}
};

//struct invalid_handle_traits
//{
//	using pointer = HANDLE;
//
//	static auto invalid() throw() -> pointer
//	{
//		return INVALID_HANDLE_VALUE;
//	}
//
//	static auto close(pointer value) throw() -> void
//	{
//		CloseHandle(value);
//	}
//};

using NullHandle = UniqueHandle<NullHandleCharacteristics>;
//using invalid_handle = unique_handle<invalid_handle_traits>;

