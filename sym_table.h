#include <unordered_map>
#include <iostream>
#include "globals.h"

#ifndef SYM_TABLE_H
#define SYM_TABLE_H

using namespace std;

struct var_data
{
	int level;
	TipoEnum tipo;

	bool operator==(const var_data &other) const
	{
		return (level == other.level && tipo == other.tipo);
	}
};

namespace std
{

	template <>
	struct hash<var_data>
	{
		std::size_t operator()(const var_data &k) const
		{
			using std::hash;
			using std::size_t;

			// Compute individual hash var_data for first,
			// second and third and combine them using XOR
			// and bit shifting:

			return ((hash<int>()(k.level) ^ (hash<TipoEnum>()(k.tipo) << 1)) >> 1);
		}
	};
}

void print_table(std::unordered_map<std::string, var_data> t);
int lookup(std::unordered_map<std::string, var_data> t, std::string lexeme);

#endif // SYM_TABLE_H
