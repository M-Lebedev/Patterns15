#pragma once
#include "machine.h"

class square
{
protected:
	int x; // ���������� �� x
	int y; // ���������� �� y
	machine *sky; // ����
	machine *land; //�����

public:

	virtual void set_coord(int,int); // ���������� ����������
	virtual int get_coord_x() const; // ���������� �
	virtual int get_coord_y() const; // ���������� �
	// ������� �� ������
	void set_sky(machine &); // ���������� ����� ��������� ������
	void clear_sky(); // �������� ����� ����
	machine* get_sky() const; // �������� ����� ��������� ������

	void set_land(machine &); // ���������� ����� �������� ������
	machine* get_land() const; // �������� ����� �������� ������
	void clear_land(); // �������� ����� �����
	virtual int get_type() const; // ��� ������


	square(int,int);
	~square();
};

// �����
class sand : public square
{
public:
	virtual int get_type() const;
	sand(int,int);
	~sand();
};


// ����
class rock : public square
{
public:
	virtual int get_type() const;
	rock(int, int);
	~rock();
};

//�����
class spice : public square
{
protected:

	int count; // ���������� ����������� ������
	int max_count; // ������������ ���-�� ������ 0-4000
public:
	int regen; // �������� ����������� ������ 1-100

public:

	int get_count_spice() const;
	void get_spice(int);

	//void //��������� ����� �������� ������� ������

	virtual int get_type() const;
	spice(int,int,int,int);
	~spice();
};