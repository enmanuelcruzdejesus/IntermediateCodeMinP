#ifndef _GLOBALS_H_
#define _GLOBALS_H_

extern int yylineno;
extern int level;

typedef enum
{
	Integer,
	Real,
	String,
	Procedure,
	Error
} TipoEnum;

#endif