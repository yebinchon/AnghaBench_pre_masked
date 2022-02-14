
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1)
{
 (void) FUNC_1("Usage: %s [-v] -o {create,overwrite,append} -f file_name"
     " [-b block_size]\n"
     "\t[-s offset] [-c write_count] [-d data]\n\n"
     "Where [data] equal to zero causes chars "
     "0->%d to be repeated throughout, or [data]\n"
     "equal to 'R' for psudorandom data.\n",
     VAR_1, VAR_0);

 FUNC_0(1);
}
