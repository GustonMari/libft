->memset(void *b, int i, size_t) -> permet de reinitialiser la memoire on peut lutiliser tel que : memset(str, 'j', 7);
 il rmeplacera donc les 7 premier charactere de str par 'j'; 
 ATTTENTION lors du cast on utilise un unsigned char pour changer la valuer du block de memoire cf tutorialspoint.com

pourquoi on a str1 < str2 que veut dire ce genre de comparaison? -> equivaut a comparer les adresses &(unsigned long)str1

->FAIRE CALLOC PAS FAIT ENCORE
->finir strlcat clean

continuer netooyage a parir de atoi

LINUX=
PB AVEC FONCTION = strlcat, strlcpy, strnstr,strdup

CALLOC A TESTER !!!!!

ATTENTION STRCHR avec "" 0  ===> check si on doit enlever le if pour proteger ou pas

MEMCHR ne marche pas pour ce cas la ./a.out memcmp "salut ca va" "salutt ttt" 6 ou 9 10 11 etc

strlcpy \0 a la fin???