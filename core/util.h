void sqliteFree(void *p);
int sqliteHashNoCase(const char *z, int n);
void *sqliteMalloc(int n);
void sqliteSetString(char **pz, const char *zFirst, ...);
char *sqliteStrDup(const char *z);
int sqliteStrNICmp(const char *zLeft, const char *zRight, int N);
int sqliteStrICmp(const char *zLeft, const char *zRight);
