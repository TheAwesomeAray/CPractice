#include <stdio.h>

#define TABWIDTH	4
#define MAXLINE		1000

char line[MAXLINE];

int getline(void);
void entab(char source[]);

void entab(char source[])
{
	int defaultTabPosition = 0;
	int currentTabPosition = defaultTabPosition;
	char c;
	int i;
	int spaceCount = 0;
	for (int i = 0; (c = source[i]) != '\0'; i++) {
		if (c == ' ' && !(currentTabPosition == TABWIDTH && spaceCount > 1)) {
			spaceCount++;
		}
		else {
			if (spaceCount > 1)
			{
				i -= spaceCount;
				source[i] = '-';
				i++;
				int t = 0;
				for (int j = i + (spaceCount - 1), t = i; source[t] != '\0'; t++, j++)
					source[t] = source[j];
			}

			spaceCount = 0;
		}

		if (c == '\t' || currentTabPosition == (TABWIDTH))
			currentTabPosition = defaultTabPosition;
		else
			currentTabPosition++;
	}
}

int getline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void main()
{
	int len;

	while ((len = getline()) > 0)
	{
		entab(line);
		printf(line);
	}
}