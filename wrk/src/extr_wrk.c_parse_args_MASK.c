
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_parser_url {int dummy; } ;
struct config {int threads; int connections; int duration; int timeout; int latency; void* script; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct config*,int ,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (void*,int*) ;
 int FUNC_6 (void*,int*) ;
 int FUNC_7 (char*,struct http_parser_url*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct config *VAR_6, char **VAR_7, struct http_parser_url *VAR_8, char **VAR_9, int VAR_10, char **VAR_11) {
    char **VAR_12 = VAR_9;
    int VAR_13;

    FUNC_3(VAR_6, 0, sizeof(struct config));
    VAR_6->threads = 2;
    VAR_6->connections = 10;
    VAR_6->duration = 10;
    VAR_6->timeout = VAR_0;

    while ((VAR_13 = FUNC_2(VAR_10, VAR_11, "t:c:d:s:H:T:Lrv?", VAR_2, ((void*)0))) != -1) {
        switch (VAR_13) {
            case 't':
                if (FUNC_5(VAR_3, &VAR_6->threads)) return -1;
                break;
            case 'c':
                if (FUNC_5(VAR_3, &VAR_6->connections)) return -1;
                break;
            case 'd':
                if (FUNC_6(VAR_3, &VAR_6->duration)) return -1;
                break;
            case 's':
                VAR_6->script = VAR_3;
                break;
            case 'H':
                *VAR_12++ = VAR_3;
                break;
            case 'L':
                VAR_6->latency = 1;
                break;
            case 'T':
                if (FUNC_6(VAR_3, &VAR_6->timeout)) return -1;
                VAR_6->timeout *= 1000;
                break;
            case 'v':
                FUNC_4("wrk %s [%s] ", VAR_1, FUNC_0());
                FUNC_4("Copyright (C) 2012 Will Glozer\n");
                break;
            case 'h':
            case '?':
            case ':':
            default:
                return -1;
        }
    }

    if (VAR_4 == VAR_10 || !VAR_6->threads || !VAR_6->duration) return -1;

    if (!FUNC_7(VAR_11[VAR_4], VAR_8)) {
        FUNC_1(VAR_5, "invalid URL: %s\n", VAR_11[VAR_4]);
        return -1;
    }

    if (!VAR_6->connections || VAR_6->connections < VAR_6->threads) {
        FUNC_1(VAR_5, "number of connections must be >= threads\n");
        return -1;
    }

    *VAR_7 = VAR_11[VAR_4];
    *VAR_12 = ((void*)0);

    return 0;
}
