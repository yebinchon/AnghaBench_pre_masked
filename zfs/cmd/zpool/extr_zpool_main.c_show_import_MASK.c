
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_status_t ;
typedef int zpool_errata_t ;
struct TYPE_5__ {scalar_t__ vs_state; scalar_t__ vs_aux; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct TYPE_6__ {int cb_namewidth; int member_0; } ;
typedef TYPE_2__ status_cbdata_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
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





 int FUNC_1 (int) ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int ,char**) ;
 scalar_t__ FUNC_9 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,int ,scalar_t__**,int *) ;
 int FUNC_11 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_12 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,char**,int*) ;
 int FUNC_17 (int *) ;
 char* FUNC_18 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_19(nvlist_t *VAR_21)
{
 uint64_t VAR_22;
 vdev_stat_t *VAR_23;
 char *VAR_24;
 uint64_t VAR_25;
 uint64_t VAR_26 = 0;
 char *VAR_27;
 char *VAR_28 = "unknown";
 nvlist_t *VAR_29, *VAR_30;
 zpool_status_t VAR_31;
 zpool_errata_t VAR_32;
 const char *VAR_33;
 uint_t VAR_34;
 char *VAR_35;
 status_cbdata_t VAR_36 = { 0 };

 FUNC_15(FUNC_8(VAR_21, VAR_16,
     &VAR_24) == 0);
 FUNC_15(FUNC_9(VAR_21, VAR_15,
     &VAR_25) == 0);
 FUNC_15(FUNC_9(VAR_21, VAR_17,
     &VAR_22) == 0);
 FUNC_15(FUNC_7(VAR_21, VAR_19,
     &VAR_29) == 0);

 FUNC_15(FUNC_10(VAR_29, VAR_18,
     (uint64_t **)&VAR_23, &VAR_34) == 0);
 VAR_33 = FUNC_18(VAR_23->vs_state, VAR_23->vs_aux);

 VAR_31 = FUNC_16(VAR_21, &VAR_27, &VAR_32);

 (void) FUNC_13(FUNC_4("   pool: %s\n"), VAR_24);
 (void) FUNC_13(FUNC_4("     id: %llu\n"), (u_longlong_t)VAR_25);
 (void) FUNC_13(FUNC_4("  state: %s"), VAR_33);
 if (VAR_22 == VAR_0)
  (void) FUNC_13(FUNC_4(" (DESTROYED)"));
 (void) FUNC_13("\n");

 switch (VAR_31) {
 case 134:
 case 135:
 case 148:
  (void) FUNC_13(FUNC_4(" status: One or more devices are "
      "missing from the system.\n"));
  break;

 case 144:
 case 145:
  (void) FUNC_13(FUNC_4(" status: One or more devices contains "
      "corrupted data.\n"));
  break;

 case 146:
  (void) FUNC_13(
      FUNC_4(" status: The pool data is corrupted.\n"));
  break;

 case 133:
  (void) FUNC_13(FUNC_4(" status: One or more devices "
      "are offlined.\n"));
  break;

 case 143:
  (void) FUNC_13(FUNC_4(" status: The pool metadata is "
      "corrupted.\n"));
  break;

 case 128:
  (void) FUNC_13(FUNC_4(" status: The pool is formatted using a "
      "legacy on-disk version.\n"));
  break;

 case 129:
  (void) FUNC_13(FUNC_4(" status: The pool is formatted using an "
      "incompatible version.\n"));
  break;

 case 139:
  (void) FUNC_13(FUNC_4(" status: Some supported features are "
      "not enabled on the pool.\n"));
  break;

 case 131:
  (void) FUNC_13(FUNC_4("status: The pool uses the following "
      "feature(s) not supported on this system:\n"));
  FUNC_17(VAR_21);
  break;

 case 130:
  (void) FUNC_13(FUNC_4("status: The pool can only be accessed "
      "in read-only mode on this system. It\n\tcannot be "
      "accessed in read-write mode because it uses the "
      "following\n\tfeature(s) not supported on this system:\n"));
  FUNC_17(VAR_21);
  break;

 case 138:
  (void) FUNC_13(FUNC_4(" status: The pool is currently "
      "imported by another system.\n"));
  break;

 case 136:
  (void) FUNC_13(FUNC_4(" status: The pool has the "
      "multihost property on.  It cannot\n\tbe safely imported "
      "when the system hostid is not set.\n"));
  break;

 case 137:
  (void) FUNC_13(FUNC_4(" status: The pool was last accessed by "
      "another system.\n"));
  break;

 case 140:
 case 141:
  (void) FUNC_13(FUNC_4(" status: One or more devices are "
      "faulted.\n"));
  break;

 case 147:
  (void) FUNC_13(FUNC_4(" status: An intent log record cannot be "
      "read.\n"));
  break;

 case 132:
  (void) FUNC_13(FUNC_4(" status: One or more devices were being "
      "resilvered.\n"));
  break;

 case 142:
  (void) FUNC_13(FUNC_4(" status: Errata #%d detected.\n"),
      VAR_32);
  break;

 default:



  FUNC_1(VAR_31 == VAR_20);
 }




 if (VAR_23->vs_state == VAR_10) {
  if (VAR_31 == 128 ||
      VAR_31 == 139) {
   (void) FUNC_13(FUNC_4(" action: The pool can be "
       "imported using its name or numeric identifier, "
       "though\n\tsome features will not be available "
       "without an explicit 'zpool upgrade'.\n"));
  } else if (VAR_31 == 137) {
   (void) FUNC_13(FUNC_4(" action: The pool can be "
       "imported using its name or numeric "
       "identifier and\n\tthe '-f' flag.\n"));
  } else if (VAR_31 == 142) {
   switch (VAR_32) {
   case 153:
    break;

   case 151:
    (void) FUNC_13(FUNC_4(" action: The pool can "
        "be imported using its name or numeric "
        "identifier,\n\thowever there is a compat"
        "ibility issue which should be corrected"
        "\n\tby running 'zpool scrub'\n"));
    break;

   case 152:
    (void) FUNC_13(FUNC_4(" action: The pool can"
        "not be imported with this version of ZFS "
        "due to\n\tan active asynchronous destroy. "
        "Revert to an earlier version\n\tand "
        "allow the destroy to complete before "
        "updating.\n"));
    break;

   case 150:
    (void) FUNC_13(FUNC_4(" action: Existing "
        "encrypted datasets contain an on-disk "
        "incompatibility, which\n\tneeds to be "
        "corrected. Backup these datasets to new "
        "encrypted datasets\n\tand destroy the "
        "old ones.\n"));
    break;

   case 149:
    (void) FUNC_13(FUNC_4(" action: Existing "
        "encrypted snapshots and bookmarks contain "
        "an on-disk\n\tincompatibility. This may "
        "cause on-disk corruption if they are used"
        "\n\twith 'zfs recv'. To correct the "
        "issue, enable the bookmark_v2 feature.\n\t"
        "No additional action is needed if there "
        "are no encrypted snapshots or\n\t"
        "bookmarks. If preserving the encrypted "
        "snapshots and bookmarks is\n\trequired, "
        "use a non-raw send to backup and restore "
        "them. Alternately,\n\tthey may be removed"
        " to resolve the incompatibility.\n"));
    break;
   default:



    FUNC_1(0);
   }
  } else {
   (void) FUNC_13(FUNC_4(" action: The pool can be "
       "imported using its name or numeric "
       "identifier.\n"));
  }
 } else if (VAR_23->vs_state == VAR_9) {
  (void) FUNC_13(FUNC_4(" action: The pool can be imported "
      "despite missing or damaged devices.  The\n\tfault "
      "tolerance of the pool may be compromised if imported.\n"));
 } else {
  switch (VAR_31) {
  case 129:
   (void) FUNC_13(FUNC_4(" action: The pool cannot be "
       "imported.  Access the pool on a system running "
       "newer\n\tsoftware, or recreate the pool from "
       "backup.\n"));
   break;
  case 131:
   (void) FUNC_13(FUNC_4("action: The pool cannot be "
       "imported. Access the pool on a system that "
       "supports\n\tthe required feature(s), or recreate "
       "the pool from backup.\n"));
   break;
  case 130:
   (void) FUNC_13(FUNC_4("action: The pool cannot be "
       "imported in read-write mode. Import the pool "
       "with\n"
       "\t\"-o readonly=on\", access the pool on a system "
       "that supports the\n\trequired feature(s), or "
       "recreate the pool from backup.\n"));
   break;
  case 134:
  case 135:
  case 148:
   (void) FUNC_13(FUNC_4(" action: The pool cannot be "
       "imported. Attach the missing\n\tdevices and try "
       "again.\n"));
   break;
  case 138:
   FUNC_0(FUNC_7(VAR_21,
       VAR_12, &VAR_30));

   if (FUNC_6(VAR_30, VAR_14))
    VAR_28 = FUNC_2(VAR_30,
        VAR_14);

   if (FUNC_6(VAR_30, VAR_13))
    VAR_26 = FUNC_3(VAR_30,
        VAR_13);

   (void) FUNC_13(FUNC_4(" action: The pool must be "
       "exported from %s (hostid=%lx)\n\tbefore it "
       "can be safely imported.\n"), VAR_28,
       (unsigned long) VAR_26);
   break;
  case 136:
   (void) FUNC_13(FUNC_4(" action: Set a unique system "
       "hostid with the zgenhostid(8) command.\n"));
   break;
  default:
   (void) FUNC_13(FUNC_4(" action: The pool cannot be "
       "imported due to damaged devices or data.\n"));
  }
 }


 if (FUNC_8(VAR_21, VAR_11, &VAR_35) == 0)
  (void) FUNC_13(FUNC_4("comment: %s\n"), VAR_35);





 if (((VAR_23->vs_state == VAR_8) ||
     (VAR_23->vs_state == VAR_7)) &&
     (VAR_23->vs_aux == VAR_5)) {
  if (VAR_22 == VAR_0)
   (void) FUNC_13(FUNC_4("\tThe pool was destroyed, "
       "but can be imported using the '-Df' flags.\n"));
  else if (VAR_22 != VAR_1)
   (void) FUNC_13(FUNC_4("\tThe pool may be active on "
       "another system, but can be imported using\n\t"
       "the '-f' flag.\n"));
 }

 if (VAR_27 != ((void*)0))
  (void) FUNC_13(FUNC_4("   see: http://zfsonlinux.org/msg/%s\n"),
      VAR_27);

 (void) FUNC_13(FUNC_4(" config:\n\n"));

 VAR_36.cb_namewidth = FUNC_5(((void*)0), VAR_29, 0, FUNC_14(VAR_24),
     VAR_6);
 if (VAR_36.cb_namewidth < 10)
  VAR_36.cb_namewidth = 10;

 FUNC_12(&VAR_36, VAR_24, VAR_29, 0);

 FUNC_11(((void*)0), &VAR_36, VAR_29, VAR_2);
 FUNC_11(((void*)0), &VAR_36, VAR_29, VAR_3);
 FUNC_11(((void*)0), &VAR_36, VAR_29, VAR_4);

 if (VAR_31 == 148) {
  (void) FUNC_13(FUNC_4("\n\tAdditional devices are known to "
      "be part of this pool, though their\n\texact "
      "configuration cannot be determined.\n"));
 }
}
