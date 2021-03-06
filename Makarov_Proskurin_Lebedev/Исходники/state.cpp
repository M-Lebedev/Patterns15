#include "state.h"

////////////////////////////////////////////////////////////////////////////////
/// \brief Конструктор по умолчанию
State::State()
{

}

////////////////////////////////////////////////////////////////////////////////
/// \brief Деструктор
State::~State()
{

}

////////////////////////////////////////////////////////////////////////////////
/// \brief Установить новое состояние
/// \param NewState новое состояние
///
void State::setState(State::IState NewState)
{
	this->MyState = NewState;
}

////////////////////////////////////////////////////////////////////////////////
/// \brief Получить текущее состояние
/// \return Значение текущего состояния
State::IState State::getState()
{
	return this->MyState;
}
