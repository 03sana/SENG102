#define NMLEN 24
#define MAXCUST 100
struct dt {

	int dy;
	int mo;
	int yr;
};
struct ph {

	int ac;
	int xc;
	int sn;
};
struct cust {

	char fnm[NMLEN];
	char lnm[NMLEN];
	struct dt bd;
	struct ph pn;
	char vip;

};
int main() {

	struct cust c[MAXCUST];
	int i = 0, ActCustNo;
	FILE* fptr;


	fptr = fopen("CustDB.txt", "r");

	fscanf(fptr, "%s %s %d/%d/%d %d-%d-%d %c",
		c[i].fnm, c[i].lnm,
		&c[i].bd.dy, &c[i].bd.mo, &c[i].bd.yr,
		&c[i].pn.ac, &c[i].pn.xc, &c[i].pn.sn,
		&c[i].vip);

	while (!feof(fptr)) {
		i++;
		fscanf(fptr, "%s %s %d/%d/%d %d-%d-%d %c",
			c[i].fnm, c[i].lnm,
			&c[i].bd.dy, &c[i].bd.mo, &c[i].bd.yr,
			&c[i].pn.ac, &c[i].pn.xc, &c[i].pn.sn,
			&c[i].vip);

	}

	No = i;
	for (i = 0; i < No; i++)
	{
		printf("%s %s %d/%d/%d %d-%d-%d %c\n", c[i].fnm, c[i].lnm,
			c[i].bd.dy, c[i].bd.mo, c[i].bd.yr,
			c[i].pn.ac, c[i].pn.xc, c[i].pn.sn,
			c[i].vip);

	}

	fclose(fptr);

	return(0);
}