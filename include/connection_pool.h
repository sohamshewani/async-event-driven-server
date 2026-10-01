#ifndef CONNECTION_POOL_H
#define CONNECTION_POOL_H

#include <Python.h>
#include <event2/bufferevent.h>

// Function prototype for creating a new connection
void* create_connection(struct bufferevent* bev);

// Function prototype for closing a connection
void close_connection(void* connection);

// Function prototype for managing connections
void manage_connections(void);

#endif // CONNECTION_POOL_H