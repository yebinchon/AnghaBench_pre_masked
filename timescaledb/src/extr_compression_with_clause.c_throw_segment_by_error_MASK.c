
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static inline void
FUNC_4(char *VAR_2)
{
 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_3("unable to parse the compress_segmentby option '%s'", VAR_2),
    FUNC_2("The compress_segmentby option should be a comma separated list of column "
      "names.")));
}
