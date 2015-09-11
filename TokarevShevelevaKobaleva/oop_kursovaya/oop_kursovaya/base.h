#pragma once
#include "square.h"
#include <vector>

using namespace std;

class base
{


public:
	int coord_x; // position of x
	int coord_y; // position of y
	
protected:	
	int import_spice; // ���-�� ����������� ������
	int count_spice; // ���������� ������ �� ����
	int count_import; // ������� ��� �������� ������������ �������������. ������ - 0
	int count_kill_military; // ����� ������� �����(0)
	int count_kill_transport; // ����� ��������������(0)

public:
	int count_lost_military; // �������� ������� �����(0)
	int count_lost_transport; // �������� ��������������(0)
	bool loos;
protected:
	int mid_trip; // ������� ������ ������

	
static int const cost_military=25000; // ���� ����������� ������� ������
static int const cost_transport=18000; // ���� ����������� ������������ ������
	
	
public:
	vector <machine *> car; // ������ �� ����� �� ����

	void set_lost();
	int get_lost(int) const;

	int create_transport(); // ������� ������������
	int create_military(); // ������� ������� ������. ��� - ������

	int get_cost_mil() const; //���� ������� ������
	int get_cost_tr() const; // ���� �������������

	void set_cost_mil(int);	// ������������� ���� ������� ������
	void set_cost_tr(int); // ������������� ���� �������������

	void add_count_kill_military();
	void add_count_kill_transport();
	
	int get_count_spice() const; // ���-�� ������ �� ����
	int get_count_military() const; // ���-�� ������� ����� � �����
	int get_count_transport() const; // ���-�� �������������� � �����
	int get_count_raz() const; //���-�� ���������
	int get_count_kill_military() const;
	int get_count_kill_transport() const;
	int get_mid_trip(void) const;

	void add_count_import(); // ����������� ���-�� ���������
	void add_trip(int); // ����������� ���-�� ������������ ������
	void bay_car(int); // �������� ������ �� ������� ������

	

	int loser(void); // ��������� �� �����? 1 - ��, 0 - ���


	base(int,int,int);
	base(void);
	~base(void);
};

