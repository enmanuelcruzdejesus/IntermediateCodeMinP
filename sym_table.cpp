#include <iostream>
#include <unordered_map>
#include "sym_table.h"

std::string typeName[5] = { "Integer", "Real", "String", "Procedure", "Error"};

void print_table(std::unordered_map<std::string, var_data> t)
{
	std::cout << "Variables declaradas\n";
	for (auto const &pair: t)
	{
		std::cout << "Variable: " << pair.first << ": Nivel: " << pair.second.level << " Tipo: " << typeName[pair.second.tipo] << std::endl;
	}
}

int lookup(std::unordered_map<std::string, var_data> t, std::string lexeme)
{
	// Revisa si la variable esta en la tabla o no
	auto var = t.find({lexeme});

	// Variable no esta en la tabla
	if (var == t.end())
	{
		return 0; // false
	}
	return 1; // true
}
