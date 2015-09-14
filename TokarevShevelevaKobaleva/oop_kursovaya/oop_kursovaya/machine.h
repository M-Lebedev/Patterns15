#pragma once

class machine
{
protected:
	int coord_x; // ���������� �� x
	int coord_y; // ���������� �� y
	int amour; // ������� �����
	int max_amour; // ������������ �����
	int speed; // ��������
	int russ; // ����� �����
	int live_time; // ����� ����� ������(0)
	

public:
	int rip; // ������� �������

	int move(int,int,int,int); // �����������
	int get_coord_x(void); // ������ ���������� x
	int get_coord_y(void); // ������ ���������� y

	int damage(int); // ������� ����(����� � ���������� ��) � ������ ���������
	int get_russ(void) const; // ������ �����
	int get_speed(void) const; // ������ �������� ������
	int get_amour(void) const; // ������ ������� �����
	int get_max_amour(void) const; // ������ ������������ �����
	int get_live_time(void) const; // ������, ������� ����� ����� ������

virtual	void add_time(); // ����������� ������� ������� �����

	machine(int,int,int,int,int,int); // full
	machine(void);
	~machine(void);
};



class transport : public machine
{

	bool sky; // � ������� ��� ��� 1 - ������, 0 - �����
	bool go_home; // ����� ��� ��� �������� 1-�����, 0-������

	int max_value; // ����� ���������
	int count_spice; // ���������� ������ � ���������

public:

	void clear_bag(); // ������� ��������
	int count_spice_inbag() const; // ���������� ������ � ���������
	int max_value_car() const; // ������������ �����
	int get_go_home(void) const; // ����� ��� ������, ����
	void set_go_home(int); // ���������� �� ����
	void add_spice(int);

	transport(int,int,int,int,int,int,int); // ������� �����������, � ������� ��������
	transport(void);
	~transport(void);
};




class military : public machine
{
public:
	bool sky_land; // 1 - ������, 0 - �����
	

	// "���������" ������
	int sky_losses; // ����������������(���� �� 1 ���) 1-10
	int sky_radius; // ��������� ���������

	// �������� ������
	int land_losses; // ����������������(���� �� 1 ���)
	int land_radius; // ��������� ���������


public:

	int get_type(void) const; // �������� ��� ��������

	military(int,int,int,int,int,int,bool,int,int,int,int); // ������� �����������, � ������� ��������
	military(void);
	~military(void);
};
