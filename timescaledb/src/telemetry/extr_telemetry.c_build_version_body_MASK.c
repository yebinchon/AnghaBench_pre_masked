
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {char* sysname; char* version; char* release; char* pretty_version; scalar_t__ has_pretty_version; } ;
typedef TYPE_3__ VersionOSInfo ;
struct TYPE_17__ {int uncompressed_toast_size; int uncompressed_index_size; int uncompressed_heap_size; int compressed_toast_size; int compressed_index_size; int compressed_heap_size; } ;
typedef TYPE_4__ TotalSizes ;
struct TYPE_19__ {int root; } ;
struct TYPE_14__ {void* len; void* val; } ;
struct TYPE_15__ {TYPE_1__ string; } ;
struct TYPE_18__ {TYPE_2__ val; void* type; } ;
typedef int StringInfo ;
typedef TYPE_5__ JsonbValue ;
typedef int JsonbParseState ;
typedef TYPE_6__ Jsonb ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_6__* FUNC_3 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char* VAR_36 ;
 char* VAR_37 ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 () ;
 char* FUNC_8 () ;
 char* FUNC_9 () ;
 char* FUNC_10 () ;
 char* FUNC_11 () ;
 char* FUNC_12 () ;
 char* FUNC_13 () ;
 char* FUNC_14 () ;
 char* FUNC_15 (int ) ;
 void* VAR_41 ;
 int FUNC_16 () ;
 TYPE_5__* FUNC_17 (int **,int ,TYPE_5__*) ;
 void* FUNC_18 (void*) ;
 int VAR_42 ;
 TYPE_4__ FUNC_19 () ;
 int FUNC_20 (int *,int ,char*) ;
 char* VAR_43 ;
 char* VAR_44 ;
 char* VAR_45 ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (TYPE_3__*) ;
 int VAR_46 ;

__attribute__((used)) static StringInfo
FUNC_26(void)
{
 JsonbValue VAR_47;
 JsonbValue VAR_48;
 JsonbValue *VAR_49;
 Jsonb *VAR_50;
 StringInfo VAR_51;
 VersionOSInfo VAR_52;
 JsonbParseState *VAR_53 = ((void*)0);
 TotalSizes VAR_54 = FUNC_19();

 FUNC_17(&VAR_53, VAR_38, ((void*)0));

 FUNC_20(VAR_53,
      VAR_11,
      FUNC_0(
       FUNC_1(VAR_46, FUNC_24())));
 FUNC_20(VAR_53,
      VAR_12,
      FUNC_0(
       FUNC_1(VAR_46, FUNC_22())));
 FUNC_20(VAR_53,
      VAR_14,
      FUNC_0(
       FUNC_1(VAR_42,
            FUNC_23())));

 FUNC_20(VAR_53, VAR_13, VAR_36);

 if (FUNC_25(&VAR_52))
 {
  FUNC_20(VAR_53, VAR_23, VAR_52.sysname);
  FUNC_20(VAR_53, VAR_25, VAR_52.version);
  FUNC_20(VAR_53, VAR_24, VAR_52.release);
  if (VAR_52.has_pretty_version)
   FUNC_20(VAR_53, VAR_26, VAR_52.pretty_version);
 }
 else
  FUNC_20(VAR_53, VAR_23, "Unknown");

 FUNC_20(VAR_53, VAR_27, FUNC_14());
 FUNC_20(VAR_53, VAR_32, VAR_37);
 FUNC_20(VAR_53, VAR_5, VAR_0);
 FUNC_20(VAR_53, VAR_6, VAR_1);
 FUNC_20(VAR_53, VAR_3, VAR_2);
 FUNC_20(VAR_53, VAR_4, FUNC_7());
 FUNC_20(VAR_53, VAR_10, FUNC_8());
 FUNC_20(VAR_53, VAR_21, FUNC_12());
 FUNC_20(VAR_53, VAR_18, FUNC_9());
 FUNC_20(VAR_53, VAR_19, FUNC_10());
 FUNC_20(VAR_53, VAR_22, FUNC_13());
 FUNC_20(VAR_53, VAR_20, FUNC_11());

 FUNC_20(VAR_53, VAR_7, FUNC_15(VAR_54.compressed_heap_size));
 FUNC_20(VAR_53, VAR_8, FUNC_15(VAR_54.compressed_index_size));
 FUNC_20(VAR_53, VAR_9, FUNC_15(VAR_54.compressed_toast_size));
 FUNC_20(VAR_53,
      VAR_33,
      FUNC_15(VAR_54.uncompressed_heap_size));
 FUNC_20(VAR_53,
      VAR_34,
      FUNC_15(VAR_54.uncompressed_index_size));
 FUNC_20(VAR_53,
      VAR_35,
      FUNC_15(VAR_54.uncompressed_toast_size));


 VAR_47.type = VAR_41;
 VAR_47.val.string.val = VAR_28;
 VAR_47.val.string.len = FUNC_18(VAR_28);
 FUNC_17(&VAR_53, VAR_40, &VAR_47);
 FUNC_6(VAR_53);


 VAR_48.type = VAR_41;
 VAR_48.val.string.val = VAR_16;
 VAR_48.val.string.len = FUNC_18(VAR_16);
 FUNC_17(&VAR_53, VAR_40, &VAR_48);
 FUNC_5(VAR_53);


 if (VAR_43 != ((void*)0))
  FUNC_20(VAR_53, VAR_29, VAR_43);

 if (VAR_44 != ((void*)0))
  FUNC_20(VAR_53, VAR_30, VAR_44);


 if (VAR_45 != ((void*)0))
 {
  VAR_47.type = VAR_41;
  VAR_47.val.string.val = VAR_15;
  VAR_47.val.string.len = FUNC_18(VAR_15);
  FUNC_17(&VAR_53, VAR_40, &VAR_47);

  FUNC_17(&VAR_53, VAR_38, ((void*)0));
  FUNC_20(VAR_53, VAR_31, VAR_45);
  FUNC_17(&VAR_53, VAR_39, ((void*)0));
 }


 VAR_47.type = VAR_41;
 VAR_47.val.string.val = VAR_17;
 VAR_47.val.string.len = FUNC_18(VAR_17);
 FUNC_17(&VAR_53, VAR_40, &VAR_47);
 FUNC_17(&VAR_53, VAR_38, ((void*)0));
 FUNC_21(VAR_53);
 FUNC_17(&VAR_53, VAR_39, ((void*)0));


 VAR_49 = FUNC_17(&VAR_53, VAR_39, ((void*)0));
 VAR_50 = FUNC_3(VAR_49);
 VAR_51 = FUNC_16();
 FUNC_2(VAR_51, &VAR_50->root, FUNC_4(VAR_50));

 return VAR_51;
}
