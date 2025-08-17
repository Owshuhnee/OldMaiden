#pragma once
#include <string>

class Card {
public:
	Card(const std::string& name, const std::string& suit);
	std::string toString() const;
	
private:
	std::string rank;
	std::string suit;
};
			
			
			