
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct string {char* data; int len; } ;
struct conf_listen {int valid; int perm; int info; int port; int name; int pname; } ;
struct conf {int arg; } ;
struct command {int offset; } ;
typedef scalar_t__ rstatus_t ;
typedef int mode_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct string* FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 char* FUNC_3 (char*,char*,char) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,struct string*) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;

char *
FUNC_8(struct conf *VAR_4, struct command *VAR_5, void *VAR_6)
{
    rstatus_t VAR_7;
    struct string *VAR_8;
    struct conf_listen *VAR_9;
    uint8_t *VAR_10, *VAR_11;
    uint32_t VAR_12;

    VAR_10 = VAR_6;
    VAR_9 = (struct conf_listen *)(VAR_10 + VAR_5->offset);

    if (VAR_9->valid == 1) {
        return "is a duplicate";
    }

    VAR_8 = FUNC_0(&VAR_4->arg);

    VAR_7 = FUNC_6(&VAR_9->pname, VAR_8);
    if (VAR_7 != VAR_2) {
        return VAR_0;
    }

    if (VAR_8->data[0] == '/') {
        uint8_t *VAR_13, *VAR_14, *VAR_15;
        uint32_t VAR_16;



        VAR_10 = VAR_8->data + VAR_8->len -1;
        VAR_14 = VAR_8->data;
        VAR_13 = FUNC_3(VAR_10, VAR_14, ' ');
        if (VAR_13 == ((void*)0)) {

            VAR_11 = VAR_8->data;
            VAR_12 = VAR_8->len;
        } else {
            VAR_15 = VAR_13 + 1;
            VAR_16 = (uint32_t)(VAR_10 - VAR_15 + 1);

            VAR_10 = VAR_13 - 1;
            VAR_11 = VAR_14;
            VAR_12 = (uint32_t)(VAR_10 - VAR_14 + 1);

            VAR_3 = 0;
            VAR_9->perm = (mode_t)FUNC_7((char *)VAR_15, ((void*)0), 8);
            if (VAR_3 || VAR_9->perm > 0777) {
                return "has an invalid file permission in \"socket_path permission\" format string";
            }
        }
    } else {
        uint8_t *VAR_17, *VAR_18, *VAR_19;
        uint32_t VAR_20;


        VAR_10 = VAR_8->data + VAR_8->len - 1;
        VAR_18 = VAR_8->data;
        VAR_17 = FUNC_3(VAR_10, VAR_18, ':');
        if (VAR_17 == ((void*)0)) {
            return "has an invalid \"hostname:port\" format string";
        }

        VAR_19 = VAR_17 + 1;
        VAR_20 = (uint32_t)(VAR_10 - VAR_19 + 1);

        VAR_10 = VAR_17 - 1;

        VAR_11 = VAR_18;
        VAR_12 = (uint32_t)(VAR_10 - VAR_18 + 1);

        VAR_9->port = FUNC_1(VAR_19, VAR_20);
        if (VAR_9->port < 0 || !FUNC_4(VAR_9->port)) {
            return "has an invalid port in \"hostname:port\" format string";
        }
    }

    VAR_7 = FUNC_5(&VAR_9->name, VAR_11, VAR_12);
    if (VAR_7 != VAR_2) {
        return VAR_0;
    }

    VAR_7 = FUNC_2(&VAR_9->name, VAR_9->port, &VAR_9->info);
    if (VAR_7 != VAR_2) {
        return VAR_0;
    }

    VAR_9->valid = 1;

    return VAR_1;
}
