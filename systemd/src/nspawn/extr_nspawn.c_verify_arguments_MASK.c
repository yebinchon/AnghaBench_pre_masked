
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void) {
        int VAR_48;

        if (VAR_42 == VAR_16 && VAR_44 == VAR_3) {







                VAR_48 = FUNC_2();
                if (VAR_48 < 0)
                        return FUNC_6(VAR_48, "Failed to determine whether we are in all unified mode.");
                if (VAR_48 > 0)
                        VAR_44 = VAR_0;
                else if (FUNC_4(VAR_17) > 0)
                        VAR_44 = VAR_2;
                else
                        VAR_44 = VAR_1;
        }

        if (VAR_46 != VAR_18)
                VAR_30 |= VAR_12;

        if (VAR_39)
                VAR_30 |= VAR_10;

        if (!(VAR_21 & VAR_4) ||
            !(VAR_21 & VAR_5)) {
                VAR_41 = 0;
                if (VAR_42 != VAR_15)
                        return FUNC_6(FUNC_1(VAR_6), "--boot cannot be used without namespacing.");
        }

        if (VAR_46 == VAR_19)
                VAR_45 = 1;

        if (VAR_42 == VAR_14 && VAR_27 <= 0)
                VAR_27 = VAR_13+3;

        if (VAR_47 != VAR_20)
                VAR_40 = 1;

        if (VAR_26 && VAR_41 && FUNC_3(0, ((void*)0)) >= 0)


                return FUNC_6(FUNC_1(VAR_6), "--keep-unit --register=yes may not be used when invoked from a user session.");

        if (VAR_22 && VAR_25)
                return FUNC_6(FUNC_1(VAR_6), "--directory= and --image= may not be combined.");

        if (VAR_43 && VAR_25)
                return FUNC_6(FUNC_1(VAR_6), "--template= and --image= may not be combined.");

        if (VAR_43 && !(VAR_22 || VAR_29))
                return FUNC_6(FUNC_1(VAR_6), "--template= needs --directory= or --machine=.");

        if (VAR_23 && VAR_43)
                return FUNC_6(FUNC_1(VAR_6), "--ephemeral and --template= may not be combined.");

        if (VAR_23 && !FUNC_0(VAR_28, VAR_9, VAR_8))
                return FUNC_6(FUNC_1(VAR_6), "--ephemeral and --link-journal= may not be combined.");

        if (VAR_46 != VAR_18 && !FUNC_7())
                return FUNC_6(FUNC_1(VAR_7), "--private-users= is not supported, kernel compiled without user namespace support.");

        if (VAR_45 && VAR_40)
                return FUNC_6(FUNC_1(VAR_6),
                                       "--read-only and --private-users-chown may not be combined.");




        if (VAR_45 && VAR_47 != VAR_20)
                return FUNC_6(FUNC_1(VAR_6), "--volatile= and --private-users-chown may not be combined.");



        if (VAR_35 &&
                (VAR_32 || VAR_34 ||
                 VAR_33 || VAR_37 ||
                 VAR_31 || VAR_38 ||
                 VAR_36 || VAR_39))
                return FUNC_6(FUNC_1(VAR_6), "--network-namespace-path= cannot be combined with other network options.");

        if (VAR_31 && VAR_38)
                return FUNC_6(FUNC_1(VAR_6),
                                       "--network-bridge= and --network-zone= may not be combined.");

        if (VAR_46 != VAR_18 && (VAR_30 & VAR_10) && !VAR_39)
                return FUNC_6(FUNC_1(VAR_6), "Invalid namespacing settings. Mounting sysfs with --private-users requires --private-network.");

        if (VAR_46 != VAR_18 && !(VAR_30 & VAR_11))
                return FUNC_6(FUNC_1(VAR_6), "Cannot combine --private-users with read-write mounts.");

        if (VAR_24 && !VAR_39)
                return FUNC_6(FUNC_1(VAR_6), "Cannot use --port= without private networking.");


        if (VAR_24)
                return FUNC_6(FUNC_1(VAR_7), "--port= is not supported, compiled without libiptc support.");


        VAR_48 = FUNC_5();
        if (VAR_48 < 0)
                return VAR_48;

        return 0;
}
