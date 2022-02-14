
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int *,int ,int ,int,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

extern void
FUNC_1(void)
{
 FUNC_0("timescaledb.max_background_workers",
       "Maximum background worker processes allocated to TimescaleDB",
       "Max background worker processes allocated to TimescaleDB - set to at "
       "least 1 + number of databases in Postgres instance to use background "
       "workers ",
       &VAR_1,
       VAR_1,
       0,
       1000,

       VAR_0,
       0,
       ((void*)0),
       ((void*)0),
       ((void*)0));
}
