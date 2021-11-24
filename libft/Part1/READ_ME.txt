->memset(void *b, int i, size_t) -> permet de reinitialiser la memoire on peut lutiliser tel que : memset(str, 'j', 7); il rmeplacera donc les 7 premier charactere de str par 'j'; ATTTENTION lors du cast on utilise un unsigned char pour changer la valuer du block de memoire cf tutorialspoint.com

----->bzero pas reussi a faire un main incluant av[2]

-> bien check memcpy un peu particulier

->PAS COMPRIS MEMMOVE POURQUOI PARFOIS ON REMPLIS PAR LA FIN ET PARFOIS NON
pourquoi on a str1 < str2 que veut dire ce genre de comparaison? pq compare les adresses ??

->PETIT DOUTE SUR STRCHR: ma fonction marche bien seulement un cas est un peut etrange: ./a.out strchr "salut ca va ?" a | cat -e
Cest car on compte dans la chaine \0 et donc on obtient et non pas null: mais jai pas compris dans quelle cas on obtient null
->FAIRE CALLOC PAS FAIT ENCORE
->Vraiment a savoir si cela marche ou pas : si lon fait: free(ft_strdup(av[2]); en fin de pgm cela marche t-il vraiment??
->comment savoir si un free marche reelment ou pas??
