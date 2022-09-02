#pragma once
#include "CharacterBuilder.h"
#include <iostream>
class NordBuilder : public CharacterBuilder
{
public:
	CharacterBuilder& BuildCharacterWeapon(std::string CharacterWeapon) override;
	CharacterBuilder& BuildCharacterType(std::string CharacterType) override;
	CharacterBuilder& BuildCharacterMagic(std::string CharacterMagic)override;
	CharacterBuilder& BuildCharacterArmor(std::string CharacterArmor)override;
	CharacterBuilder& BuildCharacterShield(std::string CharacterShield)override;
	Character& BuildCharacter() override;
	NordBuilder();
	~NordBuilder();

private:
	std::string	_CharacterWeapon;
	std::string	_CharacterType;
	std::string _CharacterMagic;
	std::string _CharacterArmor;
	std::string _CharacterShield;

};

inline CharacterBuilder& NordBuilder::BuildCharacterWeapon(std::string CharacterWeapon)
{
	_CharacterWeapon = CharacterWeapon;
	return *this;
}

CharacterBuilder& NordBuilder::BuildCharacterType(std::string CharacterType)
{
	_CharacterType = "Nord";
	return *this;
}

inline CharacterBuilder& NordBuilder::BuildCharacterMagic(std::string CharacterMagic)
{
	_CharacterMagic = CharacterMagic;
	return *this;
}

inline CharacterBuilder& NordBuilder::BuildCharacterArmor(std::string CharacterArmor)
{
	_CharacterArmor = CharacterArmor;
	return *this;
}

inline CharacterBuilder& NordBuilder::BuildCharacterShield(std::string CharacterShield)
{
	_CharacterShield = CharacterShield;
	return *this;
}

Character& NordBuilder::BuildCharacter()
{
	Character* _build = new Character(_CharacterWeapon, _CharacterMagic, _CharacterArmor, _CharacterShield, "Nord");
	return *_build;
}

NordBuilder::NordBuilder()
{

}

NordBuilder::~NordBuilder()
{
}