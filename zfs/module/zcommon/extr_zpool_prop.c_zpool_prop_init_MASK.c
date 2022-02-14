
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int member_1; } ;
typedef TYPE_1__ zprop_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_0 (int ,char*,int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,int const,int ,int ,char*,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,char*,char*) ;
 int FUNC_3 (int ,char*,int *,int ,int ,char*,char*) ;

void
FUNC_4(void)
{
 static zprop_index_t VAR_40[] = {
  { "off", 0},
  { "on", 1},
  { ((void*)0) }
 };

 static zprop_index_t VAR_41[] = {
  { "wait", 128 },
  { "continue", 130 },
  { "panic", 129 },
  { ((void*)0) }
 };


 FUNC_3(VAR_9, "altroot", ((void*)0), VAR_0,
     VAR_7, "<path>", "ALTROOT");
 FUNC_3(VAR_14, "bootfs", ((void*)0), VAR_0,
     VAR_7, "<filesystem>", "BOOTFS");
 FUNC_3(VAR_15, "cachefile", ((void*)0),
     VAR_0, VAR_7, "<file> | none", "CACHEFILE");
 FUNC_3(VAR_18, "comment", ((void*)0),
     VAR_0, VAR_7, "<comment-string>", "COMMENT");


 FUNC_2(VAR_37, "size", 0, VAR_2,
     VAR_7, "<size>", "SIZE");
 FUNC_2(VAR_25, "free", 0, VAR_2,
     VAR_7, "<size>", "FREE");
 FUNC_2(VAR_26, "freeing", 0, VAR_2,
     VAR_7, "<size>", "FREEING");
 FUNC_2(VAR_17, "checkpoint", 0,
     VAR_2, VAR_7, "<size>", "CKPOINT");
 FUNC_2(VAR_29, "leaked", 0, VAR_2,
     VAR_7, "<size>", "LEAKED");
 FUNC_2(VAR_8, "allocated", 0,
     VAR_2, VAR_7, "<size>", "ALLOC");
 FUNC_2(VAR_22, "expandsize", 0,
     VAR_2, VAR_7, "<size>", "EXPANDSZ");
 FUNC_2(VAR_24, "fragmentation", 0,
     VAR_2, VAR_7, "<percent>", "FRAG");
 FUNC_2(VAR_16, "capacity", 0, VAR_2,
     VAR_7, "<size>", "CAP");
 FUNC_2(VAR_27, "guid", 0, VAR_2,
     VAR_7, "<guid>", "GUID");
 FUNC_2(VAR_31, "load_guid", 0,
     VAR_2, VAR_7, "<load_guid>", "LOAD_GUID");
 FUNC_2(VAR_28, "health", 0, VAR_2,
     VAR_7, "<state>", "HEALTH");
 FUNC_2(VAR_20, "dedupratio", 0,
     VAR_2, VAR_7, "<1.00x or higher if deduped>",
     "DEDUP");


 FUNC_2(VAR_39, "version", VAR_6,
     VAR_0, VAR_7, "<version>", "VERSION");
 FUNC_2(VAR_10, "ashift", 0, VAR_0,
     VAR_7, "<ashift, 9-16, or 0=default>", "ASHIFT");


 FUNC_1(VAR_21, "delegation", 1,
     VAR_0, VAR_7, "on | off", "DELEGATION",
     VAR_40);
 FUNC_1(VAR_12, "autoreplace", 0,
     VAR_0, VAR_7, "on | off", "REPLACE", VAR_40);
 FUNC_1(VAR_30, "listsnapshots", 0,
     VAR_0, VAR_7, "on | off", "LISTSNAPS",
     VAR_40);
 FUNC_1(VAR_11, "autoexpand", 0,
     VAR_0, VAR_7, "on | off", "EXPAND", VAR_40);
 FUNC_1(VAR_36, "readonly", 0,
     VAR_0, VAR_7, "on | off", "RDONLY", VAR_40);
 FUNC_1(VAR_34, "multihost", 0,
     VAR_0, VAR_7, "on | off", "MULTIHOST",
     VAR_40);


 FUNC_1(VAR_23, "failmode",
     128, VAR_0, VAR_7,
     "wait | continue | panic", "FAILMODE", VAR_41);
 FUNC_1(VAR_13, "autotrim",
     VAR_5, VAR_0, VAR_7,
     "on | off", "AUTOTRIM", VAR_40);


 FUNC_0(VAR_35, "name", VAR_4,
     VAR_2, VAR_7, "NAME");
 FUNC_0(VAR_32, "maxblocksize",
     VAR_3, VAR_2, VAR_7, "MAXBLOCKSIZE");
 FUNC_0(VAR_38, "tname", VAR_4,
     VAR_1, VAR_7, "TNAME");
 FUNC_0(VAR_33, "maxdnodesize",
     VAR_3, VAR_2, VAR_7, "MAXDNODESIZE");
 FUNC_0(VAR_19, "dedupditto",
     VAR_3, VAR_0, VAR_7, "DEDUPDITTO");
}
