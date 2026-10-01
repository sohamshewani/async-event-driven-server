#ifndef EVENT_LOOP_H
#define EVENT_LOOP_H

#include <Python.h>
#include <event2/event.h>
#include <event2/bufferevent.h>

// Function prototype for registering a new service handler
void register_service_handler(const char* service_name, void (*handler)(struct bufferevent* bev));

// Function prototype for shutting down the event loop
void event_loop_shutdown(void);

// Function prototype for starting the event loop
void event_loop_start(void);

#endif // EVENT_LOOP_H