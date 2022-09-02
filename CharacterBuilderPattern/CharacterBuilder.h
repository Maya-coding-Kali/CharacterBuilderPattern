#pragma once
#include <iostream>
#include "Character.h"

class CharacterBuilder
{
public:
	
	CharacterBuilder();
	~CharacterBuilder();
	virtual CharacterBuilder& BuildCharacterWeapon(std::string	CharacterWeapon) = 0;
	virtual CharacterBuilder& BuildCharacterType(std::string	CharacterType) = 0;
	virtual CharacterBuilder& BuildCharacterMagic(std::string CharacterMagic) = 0;
	virtual CharacterBuilder& BuildCharacterArmor(std::string CharacterArmor) = 0;
	virtual CharacterBuilder& BuildCharacterShield(std::string CharacterShield) = 0;
	virtual Character& BuildCharacter() = 0;
private:

};

CharacterBuilder::CharacterBuilder()
{
}

CharacterBuilder::~CharacterBuilder()
{
}