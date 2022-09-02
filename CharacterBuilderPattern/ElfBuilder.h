#pragma once
#include "CharacterBuilder.h"
#include <iostream>
class ElfBuilder : public CharacterBuilder
{
public:
	CharacterBuilder& BuildCharacterWeapon(std::string CharacterWeapon) override;
	CharacterBuilder& BuildCharacterType(std::string	CharacterType) override;
	CharacterBuilder& BuildCharacterMagic(std::string CharacterMagic)override;
	CharacterBuilder& BuildCharacterArmor(std::string CharacterArmor)override;
	CharacterBuilder& BuildCharacterShield(std::string CharacterShield)override;
	Character& BuildCharacter() override;
	ElfBuilder();
	~ElfBuilder();

private:
	std::string	_CharacterWeapon;
	std::string	_CharacterType;
	std::string _CharacterMagic;
	std::string _CharacterArmor;
	std::string _CharacterShield;
	
};

inline CharacterBuilder& ElfBuilder::BuildCharacterWeapon(std::string CharacterWeapon)
{
	_CharacterWeapon = CharacterWeapon;
	return *this;
}

inline CharacterBuilder& ElfBuilder::BuildCharacterType(std::string CharacterType)
{
	_CharacterType = "Elf";
	return *this;
}



inline CharacterBuilder& ElfBuilder::BuildCharacterMagic(std::string CharacterMagic)
{
	_CharacterMagic = CharacterMagic;
	return *this;
}

inline CharacterBuilder& ElfBuilder::BuildCharacterArmor(std::string CharacterArmor)
{
	_CharacterArmor = CharacterArmor;
	return *this;
}

inline CharacterBuilder& ElfBuilder::BuildCharacterShield(std::string CharacterShield)
{
	_CharacterShield = CharacterShield;
	return *this;
}

Character& ElfBuilder::BuildCharacter()
{
	Character* _build = new Character(_CharacterWeapon, _CharacterMagic, _CharacterArmor, _CharacterShield, "Elf");
	return *_build;
}

ElfBuilder::ElfBuilder()
{
	
}

ElfBuilder::~ElfBuilder()
{
}