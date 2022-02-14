
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {scalar_t__ data; } ;
struct sockinfo {scalar_t__ addrlen; int addr; int family; } ;
struct addrinfo {int * ai_addr; scalar_t__ ai_addrlen; int ai_family; struct addrinfo* ai_next; int ai_flags; int * ai_canonname; scalar_t__ ai_protocol; int ai_socktype; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct string *VAR_5, int VAR_6, struct sockinfo *VAR_7)
{
    int VAR_8;
    struct addrinfo *VAR_9, *VAR_10;
    struct addrinfo VAR_11;
    char *VAR_12, VAR_13[VAR_3];
    bool VAR_14;

    FUNC_0(FUNC_8(VAR_6));

    FUNC_5(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.ai_flags = VAR_1;
    VAR_11.ai_family = VAR_0;
    VAR_11.ai_socktype = VAR_4;
    VAR_11.ai_protocol = 0;
    VAR_11.ai_addrlen = 0;
    VAR_11.ai_addr = ((void*)0);
    VAR_11.ai_canonname = ((void*)0);

    if (VAR_5 != ((void*)0)) {
        VAR_12 = (char *)VAR_5->data;
    } else {






        VAR_12 = ((void*)0);
        VAR_11.ai_flags |= VAR_2;
    }

    FUNC_7(VAR_13, VAR_3, "%d", VAR_6);





    VAR_8 = FUNC_3(VAR_12, VAR_13, &VAR_11, &VAR_9);
    if (VAR_8 != 0) {
        FUNC_4("address resolution of node '%s' service '%s' failed: %s",
                  VAR_12, VAR_13, FUNC_2(VAR_8));
        return -1;
    }
    for (VAR_10 = VAR_9, VAR_14 = 0; VAR_10 != ((void*)0); VAR_10 = VAR_10->ai_next) {
        VAR_7->family = VAR_10->ai_family;
        VAR_7->addrlen = VAR_10->ai_addrlen;
        FUNC_6(&VAR_7->addr, VAR_10->ai_addr, VAR_7->addrlen);
        VAR_14 = 1;
        break;
    }

    FUNC_1(VAR_9);

    return !VAR_14 ? -1 : 0;
}
