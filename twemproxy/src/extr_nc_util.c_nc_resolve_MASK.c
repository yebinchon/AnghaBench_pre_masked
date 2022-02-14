
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {char* data; } ;
struct sockinfo {int dummy; } ;


 int FUNC_0 (struct string*,int,struct sockinfo*) ;
 int FUNC_1 (struct string*,struct sockinfo*) ;

int
FUNC_2(struct string *VAR_0, int VAR_1, struct sockinfo *VAR_2)
{
    if (VAR_0 != ((void*)0) && VAR_0->data[0] == '/') {
        return FUNC_1(VAR_0, VAR_2);
    }

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
