#include<stdio.h>
int main()
{
	double man_population,women_population,total_leteracy,man_leteracy,women_percentage,illeterate_man,
	illeterate_women;
	
	double population=8000;
	
	man_population=population*0.52;
	women_population=population-man_population;
	total_leteracy=population*0.48;
	man_leteracy=population*0.35;
	illeterate_man=man_population-man_leteracy;
	illeterate_women=women_population-(total_leteracy-man_leteracy);
	printf("illeterate man=%.2lf\n illeterate women=%.2lf",illeterate_man,illeterate_women);
	
	return 0;
	
}

