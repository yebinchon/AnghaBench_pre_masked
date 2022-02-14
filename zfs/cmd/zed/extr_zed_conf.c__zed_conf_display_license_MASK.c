
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 const char **VAR_1;
 const char *VAR_2[] = {
     "The ZFS Event Daemon (ZED) is distributed under the terms of the",
     "  Common Development and Distribution License (CDDL-1.0)",
     "  <http://opensource.org/licenses/CDDL-1.0>.",
     "",
     "Developed at Lawrence Livermore National Laboratory"
     " (LLNL-CODE-403049).",
     "",
     ((void*)0)
 };

 for (VAR_1 = VAR_2; *VAR_1; VAR_1++)
  FUNC_1("%s\n", *VAR_1);

 FUNC_0(VAR_0);
}
