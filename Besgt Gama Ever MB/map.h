#include <SFML\Graphics.hpp>
const int length_map = 6;
const int quantity_subject = 3;

struct subject {
	std::string Name;
	int Effect_type;
	float Effect;
	int Key;

} keytab[quantity_subject] = {
	"јптечка", 1, 10, 1,
	"ѕовышение урона", 2, 0.1, 2,
	"яд", 1, -10, 3,
};

char TileMap[length_map]
{
	'0', 'c', 'c', '0', 'c', '0'
};
/*int Chest[length_map]
{
	0, 1, 1, 0, 2, 0
};
std::string name_subject[quantity_subject]
{
	"јптечка",
	"ѕовышение урона",
	"яд"
};
*/
//кака€ то ересь