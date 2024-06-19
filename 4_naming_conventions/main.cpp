#include <iostream>

int main() {
    char snakeCase[] = {'s', 'n', 'a','k', 'e', '_', 'c', 'a', 's', 'e', '\0'}; // Snake Case
    char pascalCase[] = {'P', 'a', 's', 'c', 'a', 'l','C', 'a', 's', 'e', '\0'}; // Pascal Case
    char camelCase[] = {'c', 'a', 'm', 'e', 'l', 'C', 'a', 's', 'e', '\0'}; // camelCase
    char chumgarianNotion[] =  {'c','H','u', 'm','g','a','r','i','a','n','N','o','t','i','o','n', '\0'}; // Hungarian Notion
    printf("%s \n", snakeCase);
    std::cout << pascalCase << "\n";
    printf("%s \n", camelCase);
    std::cout << chumgarianNotion << "\n";
    return 0;
}