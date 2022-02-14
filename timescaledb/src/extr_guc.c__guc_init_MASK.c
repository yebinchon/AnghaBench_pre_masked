
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int *,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (char*,char*,char*,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (char*,char*,char*,int *,int,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (char*,char*,char*,int *,int *,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

void
FUNC_6(void)
{

 FUNC_0("timescaledb.disable_optimizations",
        "Disable all timescale query optimizations",
        ((void*)0),
        &VAR_10,
        0,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));
 FUNC_0("timescaledb.optimize_non_hypertables",
        "Apply timescale query optimization to plain tables",
        "Apply timescale query optimization to plain tables in addition to "
        "hypertables",
        &VAR_20,
        0,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.restoring",
        "Install timescale in restoring mode",
        "Used for running pg_restore",
        &VAR_21,
        0,
        VAR_2,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.constraint_aware_append",
        "Enable constraint-aware append scans",
        "Enable constraint exclusion at execution time",
        &VAR_9,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_ordered_append",
        "Enable ordered append scans",
        "Enable ordered append optimization for queries that are ordered by "
        "the time dimension",
        &VAR_13,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_chunk_append",
        "Enable chunk append node",
        "Enable using chunk append node",
        &VAR_11,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_parallel_chunk_append",
        "Enable parallel chunk append node",
        "Enable using parallel aware chunk append node",
        &VAR_14,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_runtime_exclusion",
        "Enable runtime chunk exclusion",
        "Enable runtime chunk exclusion in ChunkAppend node",
        &VAR_15,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_constraint_exclusion",
        "Enable constraint exclusion",
        "Enable planner constraint exclusion",
        &VAR_12,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_0("timescaledb.enable_transparent_decompression",
        "Enable transparent decompression",
        "Enable transparent decompression when querying hypertable",
        &VAR_16,
        1,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_2("timescaledb.max_open_chunks_per_insert",
       "Maximum open chunks per insert",
       "Maximum number of open chunk tables per insert",
       &VAR_19,
       FUNC_5(VAR_29 * FUNC_4(1024) / FUNC_4(25000),
        VAR_4),






       0,
       VAR_4,
       VAR_3,
       0,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 FUNC_2("timescaledb.max_cached_chunks_per_hypertable",
       "Maximum cached chunks",
       "Maximum number of chunks stored in the cache",
       &VAR_18,
       100,
       0,
       65536,
       VAR_3,
       0,
       ((void*)0),
       VAR_7,
       ((void*)0));
 FUNC_1("timescaledb.telemetry_level",
        "Telemetry settings level",
        "Level used to determine which telemetry to send",
        &VAR_22,
        VAR_5,
        VAR_8,
        VAR_3,
        0,
        ((void*)0),
        ((void*)0),
        ((void*)0));

 FUNC_3( "timescaledb.license_key",
                           "TimescaleDB license key",
                          "Determines which features are enabled",
                           &VAR_17,
                           VAR_6,
                         VAR_2,
                       VAR_0,
                            VAR_26,
                             VAR_25,
                           ((void*)0));

 FUNC_3( "timescaledb.last_tuned",
                           "last tune run",
                          "records last time timescaledb-tune ran",
                           &VAR_23,
                           ((void*)0),
                         VAR_1,
                       0,
                            ((void*)0),
                             ((void*)0),
                           ((void*)0));

 FUNC_3( "timescaledb.last_tuned_version",
                           "version of timescaledb-tune",
                          "version of timescaledb-tune used to tune",
                           &VAR_24,
                           ((void*)0),
                         VAR_1,
                       0,
                            ((void*)0),
                             ((void*)0),
                           ((void*)0));

 FUNC_3( "timescaledb_telemetry.cloud",
                           "cloud provider",
                          "cloud provider used for this instance",
                           &VAR_28,
                           ((void*)0),
                         VAR_1,
                       0,
                            ((void*)0),
                             ((void*)0),
                           ((void*)0));
}
