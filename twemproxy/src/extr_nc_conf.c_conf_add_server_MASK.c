
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct string {char* data; int len; } ;
struct conf_server {int valid; int addrstr; int name; void* port; void* weight; int pname; } ;
struct conf {int arg; } ;
struct command {int offset; } ;
struct array {int dummy; } ;
typedef scalar_t__ rstatus_t ;
typedef int delim ;


 void* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct array*) ;
 struct conf_server* FUNC_2 (struct array*) ;
 struct string* FUNC_3 (int *) ;
 int FUNC_4 (struct conf_server*) ;
 void* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char*,char) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;

char *
FUNC_9(struct conf *VAR_4, struct command *VAR_5, void *VAR_6)
{
    rstatus_t VAR_7;
    struct array *VAR_8;
    struct string *VAR_9;
    struct conf_server *VAR_10;
    uint8_t *VAR_11, *VAR_12, *VAR_13;
    uint8_t *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
    uint32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    char VAR_26[] = " ::";

    VAR_11 = VAR_6;
    VAR_8 = (struct array *)(VAR_11 + VAR_5->offset);

    VAR_10 = FUNC_2(VAR_8);
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_10);

    VAR_9 = FUNC_3(&VAR_4->arg);


    VAR_11 = VAR_9->data + VAR_9->len - 1;
    VAR_13 = VAR_9->data;
    VAR_15 = ((void*)0);
    VAR_22 = 0;
    VAR_17 = ((void*)0);
    VAR_24 = 0;
    VAR_16 = ((void*)0);
    VAR_23 = 0;
    VAR_18 = ((void*)0);
    VAR_25 = 0;

    VAR_20 = VAR_9->data[0] == '/' ? 2 : 3;

    for (VAR_19 = 0; VAR_19 < sizeof(VAR_26); VAR_19++) {
        VAR_12 = FUNC_6(VAR_11, VAR_13, VAR_26[VAR_19]);
        if (VAR_12 == ((void*)0)) {
            if (VAR_19 == 0) {




                continue;
            }
            break;
        }

        switch (VAR_19) {
        case 0:
            VAR_18 = VAR_12 + 1;
            VAR_25 = (uint32_t)(VAR_11 - VAR_18 + 1);
            break;

        case 1:
            VAR_17 = VAR_12 + 1;
            VAR_24 = (uint32_t)(VAR_11 - VAR_17 + 1);
            break;

        case 2:
            VAR_16 = VAR_12 + 1;
            VAR_23 = (uint32_t)(VAR_11 - VAR_16 + 1);
            break;

        default:
            FUNC_0();
        }

        VAR_11 = VAR_12 - 1;
    }

    if (VAR_19 != VAR_20) {
        return "has an invalid \"hostname:port:weight [name]\"or \"/path/unix_socket:weight [name]\" format string";
    }

    VAR_14 = VAR_9->data;
    VAR_21 = VAR_25 > 0 ? VAR_9->len - (VAR_25 + 1) : VAR_9->len;
    VAR_7 = FUNC_8(&VAR_10->pname, VAR_14, VAR_21);
    if (VAR_7 != VAR_3) {
        FUNC_1(VAR_8);
        return VAR_1;
    }

    VAR_15 = VAR_13;
    VAR_22 = (uint32_t)(VAR_11 - VAR_13 + 1);

    VAR_10->weight = FUNC_5(VAR_17, VAR_24);
    if (VAR_10->weight < 0) {
        return "has an invalid weight in \"hostname:port:weight [name]\" format string";
    } else if (VAR_10->weight == 0) {
        return "has a zero weight in \"hostname:port:weight [name]\" format string";
    }

    if (VAR_9->data[0] != '/') {
        VAR_10->port = FUNC_5(VAR_16, VAR_23);
        if (VAR_10->port < 0 || !FUNC_7(VAR_10->port)) {
            return "has an invalid port in \"hostname:port:weight [name]\" format string";
        }
    }

    if (VAR_18 == ((void*)0)) {





        if (VAR_10->port == VAR_0) {
            VAR_18 = VAR_15;
            VAR_25 = VAR_22;
        } else {
            VAR_18 = VAR_15;
            VAR_25 = VAR_22 + 1 + VAR_23;
        }
    }

    VAR_7 = FUNC_8(&VAR_10->name, VAR_18, VAR_25);
    if (VAR_7 != VAR_3) {
        return VAR_1;
    }

    VAR_7 = FUNC_8(&VAR_10->addrstr, VAR_15, VAR_22);
    if (VAR_7 != VAR_3) {
        return VAR_1;
    }
    VAR_10->valid = 1;

    return VAR_2;
}
