#include <potatosalad.h>

Potato::Potato(std::string type, std::string cutStyle){
	m_type = type;
	m_cutStyle = cutStyle;
}

Potato::~Potato() {}

Potato::GetType() {
	return m_type;
}

Potato::GetCutStyle() {
	return m_cutStyle;
}

Condiment::Condiment(std::string type){
	m_type = type;
}

Condiment::~Condiment() {}

std::string Condiment::GetType() {
	return m_type;
}

Salad::Salad(int numberOfPeople) {
	while (numberOfPeople%2 == 0 && numberOfPeople != 0) {
		m_potatoes.pushback(new Potato("medium", "cubed"));
		m_potatoes.pushback(new Potato("medium", "cubed"));
		condiments.pushback(new Condiment("salt"));
		condiments.pushback(new Condiment("pepper"));
		condiments.pushback(new Condiment("mayonnaise"));
		condiments.pushback(new Condiment("yoghurt"));

		numberOfPeople = numberOfPeople/2;
	}
}
Salad::~Salad() {}