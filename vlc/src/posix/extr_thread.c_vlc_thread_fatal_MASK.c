
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,int,int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
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
    FUNC_3 ("Thread error");
    FUNC_1 (VAR_0);

    FUNC_4 (VAR_6);
    FUNC_0 ();
}
