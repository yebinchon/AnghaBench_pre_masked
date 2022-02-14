
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {char* h_name; char** h_aliases; scalar_t__ h_addr_list; } ;
typedef int lua_State ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_0, struct hostent *VAR_1)
{
    char **VAR_2;
    struct in_addr **VAR_3;
    int VAR_4, VAR_5;
    FUNC_2(VAR_0); VAR_5 = FUNC_1(VAR_0);
    FUNC_4(VAR_0, "name");
    FUNC_4(VAR_0, VAR_1->h_name);
    FUNC_5(VAR_0, VAR_5);
    FUNC_4(VAR_0, "ip");
    FUNC_4(VAR_0, "alias");
    VAR_4 = 1;
    VAR_2 = VAR_1->h_aliases;
    FUNC_2(VAR_0);
    if (VAR_2) {
        while (*VAR_2) {
            FUNC_3(VAR_0, VAR_4);
            FUNC_4(VAR_0, *VAR_2);
            FUNC_5(VAR_0, -3);
            VAR_4++; VAR_2++;
        }
    }
    FUNC_5(VAR_0, VAR_5);
    VAR_4 = 1;
    FUNC_2(VAR_0);
    VAR_3 = (struct in_addr **) VAR_1->h_addr_list;
    if (VAR_3) {
        while (*VAR_3) {
            FUNC_3(VAR_0, VAR_4);
            FUNC_4(VAR_0, FUNC_0(**VAR_3));
            FUNC_5(VAR_0, -3);
            VAR_4++; VAR_3++;
        }
    }
    FUNC_5(VAR_0, VAR_5);
}
