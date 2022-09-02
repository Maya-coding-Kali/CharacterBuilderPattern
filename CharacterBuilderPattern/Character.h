#pragma once
#pragma once
#include <iostream>
class Character 
{
public:
	Character(std::string CharacterWeapon, std::string CharacterMagic, std::string CharacterArmor, std::string CharacterShield, std::string CharacterType);
	~Character();
	 
	void SetCharacterWeapon(std::string Weapon);
	void SetCharacterMagic(std::string Magic);
	void SetCharacterArmor(std::string Armor);
	void SetCharacterShield(std::string Shield);
	std::string GetCharacterWeapon();
	std::string GetCharacterType();
	std::string GetCharacterMagic();
	std::string GetCharacterArmor();
	std::string GetCharacterShield();
	void print();
private:
	std::string	_CharacterType;
	std::string	_CharacterWeapon;
	std::string _CharacterMagic;
	std::string _CharacterArmor;
	std::string _CharacterShield;


};

Character::Character(std::string CharacterWeapon, std::string CharacterMagic, std::string CharacterArmor, std::string CharacterShield, std::string CharacterType) :_CharacterWeapon(CharacterWeapon), _CharacterMagic(CharacterMagic), _CharacterArmor(CharacterArmor), _CharacterShield(CharacterShield), _CharacterType(CharacterType)
{

}
void Character::print()
{
	std::cout << _CharacterType<< " Character\n";
	std::cout << "Weapon: " << _CharacterWeapon << "\n";
	std::cout << "Magic: " << _CharacterMagic << "\n";
	std::cout << "Armor: " << _CharacterArmor << "\n";
	std::cout << "Shield: " << _CharacterShield << "\n\n";


}
Character::~Character()
{
}

void Character::SetCharacterArmor(std::string Armor)
{
	_CharacterArmor = Armor;

}
void Character::SetCharacterMagic(std::string Magic)
{
	_CharacterMagic = Magic;
}
void Character::SetCharacterWeapon(std::string Weapon)
{
	_CharacterWeapon = Weapon;
}
void Character::SetCharacterShield(std::string Shield)
{
	_CharacterShield = Shield;
}
std::string Character::GetCharacterArmor()
{
	return _CharacterArmor;

}
std::string Character::GetCharacterMagic()
{
	return _CharacterMagic;
}
std::string Character::GetCharacterWeapon()
{
	return _CharacterWeapon;
}
inline std::string Character::GetCharacterType()
{
	return _CharacterType;
}
std::string Character::GetCharacterShield()
{
	return _CharacterShield;
}
