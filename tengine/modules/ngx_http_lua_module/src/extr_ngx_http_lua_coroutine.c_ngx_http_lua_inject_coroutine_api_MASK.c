
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int lua_State ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,int *,int ,char*,int,int ) ;

void
FUNC_11(ngx_log_t *VAR_5, lua_State *VAR_6)
{
    int VAR_7;


    FUNC_1(VAR_6, 0 , 14 );


    FUNC_3(VAR_6, "coroutine");


    FUNC_2(VAR_6, -1, "running");
    FUNC_7(VAR_6, -3, "running");

    FUNC_2(VAR_6, -1, "create");
    FUNC_7(VAR_6, -3, "_create");

    FUNC_2(VAR_6, -1, "resume");
    FUNC_7(VAR_6, -3, "_resume");

    FUNC_2(VAR_6, -1, "yield");
    FUNC_7(VAR_6, -3, "_yield");

    FUNC_2(VAR_6, -1, "status");
    FUNC_7(VAR_6, -3, "_status");


    FUNC_5(VAR_6, 1);

    FUNC_6(VAR_6, VAR_1);
    FUNC_7(VAR_6, -2, "__create");

    FUNC_6(VAR_6, VAR_2);
    FUNC_7(VAR_6, -2, "__resume");

    FUNC_6(VAR_6, VAR_4);
    FUNC_7(VAR_6, -2, "__yield");

    FUNC_6(VAR_6, VAR_3);
    FUNC_7(VAR_6, -2, "__status");

    FUNC_8(VAR_6, "coroutine");


    {
        const char VAR_8[] =
            "local keys = {'create', 'yield', 'resume', 'status'}\n"



            "local getfenv = getfenv\n"

            "for _, key in ipairs(keys) do\n"
               "local std = coroutine['_' .. key]\n"
               "local ours = coroutine['__' .. key]\n"
               "local raw_ctx = ngx._phase_ctx\n"
               "coroutine[key] = function (...)\n"



                    "local r = getfenv(0).__ngx_req\n"

                    "if r ~= nil then\n"



                        "local ctx = raw_ctx(r)\n"


                        "if ctx ~= 0x020 and ctx ~= 0x040 then\n"
                            "return ours(...)\n"
                        "end\n"
                    "end\n"
                    "return std(...)\n"
                "end\n"
            "end\n"
            "local create, resume = coroutine.create, coroutine.resume\n"
            "coroutine.wrap = function(f)\n"
               "local co = create(f)\n"
               "return function(...) return select(2, resume(co, ...)) end\n"
            "end\n"
            "package.loaded.coroutine = coroutine";




            ;

        VAR_7 = FUNC_0(VAR_6, VAR_8, sizeof(VAR_8) - 1, "=coroutine.wrap");
    }

    if (VAR_7 != 0) {
        FUNC_10(VAR_0, VAR_5, 0,
                      "failed to load Lua code for coroutine.wrap(): %i: %s",
                      VAR_7, FUNC_9(VAR_6, -1));

        FUNC_5(VAR_6, 1);
        return;
    }

    VAR_7 = FUNC_4(VAR_6, 0, 0, 0);
    if (VAR_7 != 0) {
        FUNC_10(VAR_0, VAR_5, 0,
                      "failed to run the Lua code for coroutine.wrap(): %i: %s",
                      VAR_7, FUNC_9(VAR_6, -1));
        FUNC_5(VAR_6, 1);
    }
}
