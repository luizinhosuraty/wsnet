 /**
 *  \file   _aodv_routing_route_management.h
 *  \brief  AODV based routing approach: Route Management Header File
 *  \author Luiz Henrique Suraty Filho (CEA-LETI)
 *  \date   May 2013
 *  \version 1.0
**/
#ifndef  __aodv_routing_route_management__
#define __aodv_routing_route_management__


/** \brief Function to forward received packet towards the destination (AODV)
 *  \fn void route_forward_data_packet_to_destination(call_t *to, call_t *from, packet_t *packet)
 *  \param to is a pointer to the called class
 *  \param from is a pointer to the class who invoked
 *  \param packet is a pointer to the received packet
 **/
void route_forward_packet_to_destination(call_t *to, call_t *from, packet_t *packet);


/** \brief Function to update the local routing table according to received interest packets
 *  \fn  int route_update_from_interest(call_t *to, call_t *from, packet_t *packet)
 *  \param to is a pointer to the called class
 *  \param from is a pointer to the class who invoked
 *  \param packet is a pointer to the received packet
 *  \return SUCCESSFUL if success, UNSUCCESSFUL otherwise
 **/
int route_update_from_packet(call_t *to, call_t *from, packet_t *packet);

 
 /** \brief Function to compute the nexthop towards a given destination (AODV)
 *  \fn   struct route_aodv* route_get_nexthop_to_destination(call_t *to, call_t *from, int dst)
 *  \param to is a pointer to the called class
 *  \param from is a pointer to the class who invoked
 *  \param dst is the ID of the destination
 *  \return NULL if failure, otherwise the destination information of nexthop node
 **/
struct _aodv_routing_route* route_get_nexthop_to_destination(call_t *to, call_t *from, int dst);

/** \brief Function to update the global class stats informations (global path establishment time, etc.)
 *  \fn     void route_update_global_stats(call_t *to, call_t *from, call_t *from)
 *  \param to is a pointer to the called class
 *  \param from is a pointer to the class who invoked
 *  \param delay is the path establishment time
 **/
 void route_update_global_stats(call_t *to, call_t *from, double path_delay);

/** \brief Function to get the sensitivity from the radio below lower class
 *  \fn     double get_sensitivity_from_radio(call_t *actual, call_t *lower)
 *  \param actual is a pointer to the current class
 *  \param lower is a pointer to the lower class who invoked
 *  \return sensitivity of the radio below lower class
 **/
double get_sensitivity_from_radio(call_t *actual, call_t *lower);

void route_clean(call_t *to, call_t *from);

void route_clean_callback(call_t *to, call_t *from, void *args);
 
int route_get_last_final_dst_seq_number(call_t *to, nodeid_t dst);
#endif  //__aodv_routing_route_management__



