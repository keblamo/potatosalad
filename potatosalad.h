#include <string>
#include <vector>

class Potato {
private: 
	std::string m_type;
	std::string m_cutStyle;

public:
	Potato(std::string type, std::string cutStyle);
	~Potato();
	std::string GetType();
	std::string GetCutStyle();
};

class Condiment {
private:
	std::string m_type;

public:
	Condiment(std::string type);
	~Condiment();
	std::string GetType();
};

class Salad {
private:
	std::string m_potatoes;
	std::string <vector> condiments;

public:
	Salad(int numberOfPeople);
	~Salad();
};