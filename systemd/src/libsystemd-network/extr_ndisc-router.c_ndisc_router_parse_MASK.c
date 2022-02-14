
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct nd_router_advert {scalar_t__ nd_ra_type; scalar_t__ nd_ra_code; int nd_ra_flags_reserved; int nd_ra_router_lifetime; int nd_ra_curhoplimit; } ;
struct TYPE_5__ {int raw_size; int flags; int preference; int rindex; int mtu; int lifetime; int hop_limit; } ;
typedef TYPE_1__ sd_ndisc_router ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 struct nd_router_advert* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(sd_ndisc_router *VAR_6) {
        struct nd_router_advert *VAR_7;
        const uint8_t *VAR_8;
        bool VAR_9 = 0, VAR_10 = 0;
        size_t VAR_11;

        FUNC_2(VAR_6);

        if (VAR_6->raw_size < sizeof(struct nd_router_advert)) {
                FUNC_5("Too small to be a router advertisement, ignoring.");
                return -VAR_0;
        }


        VAR_7 = FUNC_1(VAR_6);

        if (VAR_7->nd_ra_type != VAR_2) {
                FUNC_5("Received ND packet that is not a router advertisement, ignoring.");
                return -VAR_0;
        }

        if (VAR_7->nd_ra_code != 0) {
                FUNC_5("Received ND packet with wrong RA code, ignoring.");
                return -VAR_0;
        }

        VAR_6->hop_limit = VAR_7->nd_ra_curhoplimit;
        VAR_6->flags = VAR_7->nd_ra_flags_reserved;
        VAR_6->lifetime = FUNC_3(VAR_7->nd_ra_router_lifetime);

        VAR_6->preference = (VAR_6->flags >> 3) & 3;
        if (!FUNC_0(VAR_6->preference, VAR_4, VAR_3))
                VAR_6->preference = VAR_5;

        VAR_8 = (const uint8_t*) FUNC_1(VAR_6) + sizeof(struct nd_router_advert);
        VAR_11 = VAR_6->raw_size - sizeof(struct nd_router_advert);

        for (;;) {
                uint8_t VAR_12;
                size_t VAR_13;

                if (VAR_11 == 0)
                        break;

                if (VAR_11 < 2) {
                        FUNC_5("Option lacks header, ignoring datagram.");
                        return -VAR_0;
                }

                VAR_12 = VAR_8[0];
                VAR_13 = VAR_8[1] * 8;

                if (VAR_13 == 0) {
                        FUNC_5("Zero-length option, ignoring datagram.");
                        return -VAR_0;
                }
                if (VAR_11 < VAR_13) {
                        FUNC_5("Option truncated, ignoring datagram.");
                        return -VAR_0;
                }

                switch (VAR_12) {

                case 130:

                        if (VAR_13 != 4*8) {
                                FUNC_5("Prefix option of invalid size, ignoring datagram.");
                                return -VAR_0;
                        }

                        if (VAR_8[2] > 128) {
                                FUNC_5("Bad prefix length, ignoring datagram.");
                                return -VAR_0;
                        }

                        break;

                case 131: {
                        uint32_t VAR_14;

                        if (VAR_9) {
                                FUNC_5("MTU option specified twice, ignoring.");
                                break;
                        }

                        if (VAR_13 != 8) {
                                FUNC_5("MTU option of invalid size, ignoring datagram.");
                                return -VAR_0;
                        }

                        VAR_14 = FUNC_4(*(uint32_t*) (VAR_8 + 4));
                        if (VAR_14 >= VAR_1)
                                VAR_6->mtu = VAR_14;

                        VAR_9 = 1;
                        break;
                }

                case 128:
                        if (VAR_13 < 1*8 || VAR_13 > 3*8) {
                                FUNC_5("Route information option of invalid size, ignoring datagram.");
                                return -VAR_0;
                        }

                        if (VAR_8[2] > 128) {
                                FUNC_5("Bad route prefix length, ignoring datagram.");
                                return -VAR_0;
                        }

                        break;

                case 129:
                        if (VAR_13 < 3*8 || (VAR_13 % (2*8)) != 1*8) {
                                FUNC_5("RDNSS option has invalid size.");
                                return -VAR_0;
                        }

                        break;

                case 132:

                        if (VAR_10) {
                                FUNC_5("Flags extension option specified twice, ignoring.");
                                break;
                        }

                        if (VAR_13 < 1*8) {
                                FUNC_5("Flags extension option has invalid size.");
                                return -VAR_0;
                        }


                        VAR_6->flags |=
                                ((uint64_t) VAR_8[2] << 8) |
                                ((uint64_t) VAR_8[3] << 16) |
                                ((uint64_t) VAR_8[4] << 24) |
                                ((uint64_t) VAR_8[5] << 32) |
                                ((uint64_t) VAR_8[6] << 40) |
                                ((uint64_t) VAR_8[7] << 48);

                        VAR_10 = 1;
                        break;

                case 133:
                        if (VAR_13 < 2*8) {
                                FUNC_5("DNSSL option has invalid size.");
                                return -VAR_0;
                        }

                        break;
                }

                VAR_8 += VAR_13, VAR_11 -= VAR_13;
        }

        VAR_6->rindex = sizeof(struct nd_router_advert);
        return 0;
}
