
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_feature_t ;


 int const VAR_0 ;
 int const VAR_1 ;


 int const VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;

 int const VAR_6 ;

 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;

 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int const VAR_22 ;
 int const VAR_23 ;

 int const VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int const,char*,char*,char*,int,int ,int const*) ;

void
FUNC_1(void)
{
 FUNC_0(VAR_1,
     "com.delphix:async_destroy", "async_destroy",
     "Destroy filesystems asynchronously.",
     VAR_28, VAR_29, ((void*)0));

 FUNC_0(VAR_5,
     "com.delphix:empty_bpobj", "empty_bpobj",
     "Snapshots use less space.",
     VAR_28, VAR_29, ((void*)0));

 FUNC_0(VAR_13,
     "org.illumos:lz4_compress", "lz4_compress",
     "LZ4 compression algorithm support.",
     VAR_25, VAR_29, ((void*)0));

 FUNC_0(VAR_14,
     "com.joyent:multi_vdev_crash_dump", "multi_vdev_crash_dump",
     "Crash dumps to multiple vdev pools.",
     0, VAR_29, ((void*)0));

 FUNC_0(VAR_23,
     "com.delphix:spacemap_histogram", "spacemap_histogram",
     "Spacemaps maintain space histograms.",
     VAR_28, VAR_29, ((void*)0));

 FUNC_0(131,
     "com.delphix:enabled_txg", "enabled_txg",
     "Record txg at which a feature is enabled",
     VAR_28, VAR_29, ((void*)0));

 {
 static const spa_feature_t VAR_31[] = {
  131,
  129
 };
 FUNC_0(VAR_8,
     "com.delphix:hole_birth", "hole_birth",
     "Retain hole birth txg for more precise zfs send",
     VAR_26 | VAR_25,
     VAR_29, VAR_31);
 }

 FUNC_0(VAR_16,
     "com.delphix:zpool_checkpoint", "zpool_checkpoint",
     "Pool state can be checkpointed, allowing rewind later.",
     VAR_28, VAR_29, ((void*)0));

 FUNC_0(128,
     "com.delphix:spacemap_v2", "spacemap_v2",
     "Space maps representing large segments are more efficient.",
     VAR_28 | VAR_25,
     VAR_29, ((void*)0));

 FUNC_0(130,
     "com.delphix:extensible_dataset", "extensible_dataset",
     "Enhanced dataset functionality, used by other features.",
     0, VAR_29, ((void*)0));

 {
 static const spa_feature_t VAR_32[] = {
  130,
  129
 };

 FUNC_0(134,
     "com.delphix:bookmarks", "bookmarks",
     "\"zfs bookmark\" command",
     VAR_28, VAR_29,
     VAR_32);
 }

 {
 static const spa_feature_t VAR_33[] = {
  130,
  129
 };
 FUNC_0(VAR_7,
     "com.joyent:filesystem_limits", "filesystem_limits",
     "Filesystem and snapshot limits.",
     VAR_28, VAR_29,
     VAR_33);
 }

 FUNC_0(VAR_4,
     "com.delphix:embedded_data", "embedded_data",
     "Blocks which compress very well use even less space.",
     VAR_26 | VAR_25,
     VAR_29, ((void*)0));

 {
 static const spa_feature_t VAR_34[] = {
  130,
  129
 };
 FUNC_0(VAR_11,
     "com.delphix:livelist", "livelist",
     "Improved clone deletion performance.",
     VAR_28, VAR_29,
     VAR_34);
 }

 {
 static const spa_feature_t VAR_35[] = {
  128,
  129
 };
 FUNC_0(VAR_12,
     "com.delphix:log_spacemap", "log_spacemap",
     "Log metaslab changes on a single spacemap and "
     "flush them periodically.",
     VAR_28, VAR_29,
     VAR_35);
 }

 {
 static const spa_feature_t VAR_36[] = {
  130,
  129
 };
 FUNC_0(VAR_9,
     "org.open-zfs:large_blocks", "large_blocks",
     "Support for blocks larger than 128KB.",
     VAR_27, VAR_29,
     VAR_36);
 }

 {
 static const spa_feature_t VAR_37[] = {
  130,
  129
 };
 FUNC_0(VAR_10,
     "org.zfsonlinux:large_dnode", "large_dnode",
     "Variable on-disk size of dnodes.",
     VAR_27, VAR_29,
     VAR_37);
 }

 {
 static const spa_feature_t VAR_38[] = {
  130,
  129
 };
 FUNC_0(VAR_21,
     "org.illumos:sha512", "sha512",
     "SHA-512/256 hash algorithm.",
     VAR_27, VAR_29,
     VAR_38);
 }

 {
 static const spa_feature_t VAR_39[] = {
  130,
  129
 };
 FUNC_0(VAR_22,
     "org.illumos:skein", "skein",
     "Skein hash algorithm.",
     VAR_27, VAR_29,
     VAR_39);
 }

 {
 static const spa_feature_t VAR_40[] = {
  130,
  129
 };
 FUNC_0(VAR_3,
     "org.illumos:edonr", "edonr",
     "Edon-R hash algorithm.",
     VAR_27, VAR_29,
     VAR_40);
 }

 {
 static const spa_feature_t VAR_41[] = {
  133,
  130,
  134,
  129
 };
 FUNC_0(VAR_19,
     "com.delphix:redaction_bookmarks", "redaction_bookmarks",
     "Support for bookmarks which store redaction lists for zfs "
     "redacted send/recv.", 0, VAR_29,
     VAR_41);
 }

 {
 static const spa_feature_t VAR_42[] = {
  130,
  129
 };
 FUNC_0(VAR_18,
     "com.delphix:redacted_datasets", "redacted_datasets", "Support for "
     "redacted datasets, produced by receiving a redacted zfs send "
     "stream.", VAR_27, VAR_30,
     VAR_42);
 }

 {
 static const spa_feature_t VAR_43[] = {
  133,
  130,
  134,
  129
 };
 FUNC_0(VAR_2,
     "com.delphix:bookmark_written", "bookmark_written",
     "Additional accounting, enabling the written#<bookmark> property"
     "(space written since a bookmark), and estimates of send stream "
     "sizes for incrementals from bookmarks.",
     0, VAR_29, VAR_43);
 }

 FUNC_0(132,
     "com.delphix:device_removal", "device_removal",
     "Top-level vdevs can be removed, reducing logical pool size.",
     VAR_26, VAR_29, ((void*)0));

 {
 static const spa_feature_t VAR_44[] = {
  130,
  132,
  129
 };
 FUNC_0(VAR_15,
     "com.delphix:obsolete_counts", "obsolete_counts",
     "Reduce memory used by removed devices when their blocks are "
     "freed or remapped.",
     VAR_28, VAR_29,
     VAR_44);
 }

 {
 static const spa_feature_t VAR_45[] = {
  130,
  129
 };
 FUNC_0(VAR_24,
     "org.zfsonlinux:userobj_accounting", "userobj_accounting",
     "User/Group object accounting.",
     VAR_28 | VAR_27,
     VAR_29, VAR_45);
 }

 {
 static const spa_feature_t VAR_46[] = {
  130,
  134,
  129
 };
 FUNC_0(133,
     "com.datto:bookmark_v2", "bookmark_v2",
     "Support for larger bookmarks",
     0, VAR_29, VAR_46);
 }

 {
 static const spa_feature_t VAR_47[] = {
  130,
  133,
  129
 };
 FUNC_0(VAR_6,
     "com.datto:encryption", "encryption",
     "Support for dataset level encryption",
     VAR_27, VAR_29,
     VAR_47);
 }

 {
 static const spa_feature_t VAR_48[] = {
  130,
  129
 };
 FUNC_0(VAR_17,
     "org.zfsonlinux:project_quota", "project_quota",
     "space/object accounting based on project ID.",
     VAR_28 | VAR_27,
     VAR_29, VAR_48);
 }

 {
 FUNC_0(VAR_0,
     "org.zfsonlinux:allocation_classes", "allocation_classes",
     "Support for separate allocation classes.",
     VAR_28, VAR_29, ((void*)0));
 }

 FUNC_0(VAR_20,
     "com.datto:resilver_defer", "resilver_defer",
     "Support for deferring new resilvers when one is already running.",
     VAR_28, VAR_29, ((void*)0));
}
