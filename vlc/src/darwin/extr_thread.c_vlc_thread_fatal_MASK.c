
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;



 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_8 (const char *VAR_1, int VAR_2,
                  const char *VAR_3, const char *VAR_4, unsigned VAR_5)
{
    int VAR_6 = FUNC_5 ();
    FUNC_2 (VAR_0, "LibVLC fatal error %s (%d) in thread %d ",
             VAR_1, VAR_2, FUNC_6 ());
    FUNC_7 (VAR_3, VAR_4, VAR_5);

    char VAR_7[1000];
    const char *VAR_8;

    switch (FUNC_3 (VAR_2, VAR_7, sizeof (VAR_7)))
    {
        case 0:
            VAR_8 = VAR_7;
            break;
        case 128:
            VAR_8 = "unknown (too big to display)";
            break;
        default:
            VAR_8 = "unknown (invalid error number)";
            break;
    }
    FUNC_2 (VAR_0, " Error message: %s\n", VAR_8);
    FUNC_1 (VAR_0);

    FUNC_4 (VAR_6);
    FUNC_0 ();
}
