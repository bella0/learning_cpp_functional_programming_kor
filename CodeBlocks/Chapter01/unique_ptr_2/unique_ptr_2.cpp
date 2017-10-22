/* unique_ptr_2.cpp */
#include <memory>
#include <iostream>

using namespace std;

struct BodyMass
{
	int Id;
	float Weight;

	BodyMass(int id, float weight) :
		Id(id),
		Weight(weight)
	{
		cout << "BodyMass is constructed!" << endl;
		cout << "Id = " << Id << endl;
		cout << "Weight = " << Weight << endl;
	}

	BodyMass(const BodyMass &other) :
		Id(other.Id),
		Weight(other.Weight)
	{
		cout << "BodyMass is copy constructed!" << endl;
		cout << "Id = " << Id << endl;
		cout << "Weight = " << Weight << endl;
	}

	~BodyMass()
	{
		cout << "BodyMass is destructed!" << endl;
	}
};
auto main() -> int
{
	cout << "[unique_ptr_2.cpp]" << endl;

	auto myWeight = make_unique<BodyMass>(1, 165.3f);

	// unique_ptr�� ����߱� ������
	// �����Ϸ��� ������ �޸𸮳� ��ü�� ����Ű�� �� �ٸ� ������ ������
	// �����Ѵ�.
	//auto myWeight2 = myWeight;

	// *myWeight�� unique_ptr�� �ƴ�, �Ҵ�� ���� ��ü�� ��Ÿ���Ƿ�
	// �Ʒ� �ڵ�� ���ȴ�.
	auto copyWeight = *myWeight;

	return 0;
}


