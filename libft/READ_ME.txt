->memset(void *b, int i, size_t) -> permet de reinitialiser la memoire on peut lutiliser tel que : memset(str, 'j', 7);
 il rmeplacera donc les 7 premier charactere de str par 'j'; 
 ATTTENTION lors du cast on utilise un unsigned char pour changer la valuer du block de memoire cf tutorialspoint.com

pourquoi on a str1 < str2 que veut dire ce genre de comparaison? -> equivaut a comparer les adresses &(unsigned long)str1

->PETIT DOUTE SUR STRCHR: ma fonction marche bien seulement un cas est un peut etrange: ./a.out strchr "salut ca va ?" a | cat -e
Cest car on compte dans la chaine \0 et donc on obtient et non pas null: mais jai pas compris dans quelle cas on obtient null
->FAIRE CALLOC PAS FAIT ENCORE
->Vraiment a savoir si cela marche ou pas : si lon fait: free(ft_strdup(av[2]); en fin de pgm cela marche t-il vraiment??
->comment savoir si un free marche reelment ou pas??
->finir strlcat clean

continuer netooyage a parir de atoi

LINUX=
PB AVEC FONCTION = strlcat, strlcpy, strnstr,strdup

ATTENTION STRCHR avec "" 0  ===> check si on doit enlever le if pour proteger ou pas

MEMCHR ne marche pas pour ce cas la ./a.out memcmp "salut ca va" "salutt ttt" 6 ou 9 10 11 etc
