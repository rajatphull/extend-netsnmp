/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef ETHTOOLSTATTABLE_DATA_ACCESS_H
#define ETHTOOLSTATTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ethtoolStatTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * ETHTOOL-MIB::ethtoolStatTable is subid 1 of ethtool.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.39178.100.1.1, length: 10
*/


    int ethtoolStatTable_init_data(ethtoolStatTable_registration * ethtoolStatTable_reg);


    /*
     * TODO:180:o: Review ethtoolStatTable cache timeout.
     * The number of seconds before the cache times out
     */
#define ETHTOOLSTATTABLE_CACHE_TIMEOUT   60

void ethtoolStatTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void ethtoolStatTable_container_shutdown(netsnmp_container *container_ptr);

int ethtoolStatTable_container_load(netsnmp_container *container);
void ethtoolStatTable_container_free(netsnmp_container *container);

int ethtoolStatTable_cache_load(netsnmp_container *container);
void ethtoolStatTable_cache_free(netsnmp_container *container);

    int ethtoolStatTable_row_prep( ethtoolStatTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* ETHTOOLSTATTABLE_DATA_ACCESS_H */