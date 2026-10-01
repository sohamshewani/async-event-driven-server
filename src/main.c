#include <Python.h>
#include "event_loop.h"
#include "connection_pool.h"
#include "service_layer.h"

int main(int argc, char** argv) {
    // Initialize Python
    Py_Initialize();

    // Register service handlers
    register_service_handler("service1", handle_request);
    register_service_handler("service2", handle_request);

    // Start the event loop
    event_loop_start();

    // Clean up
    Py_Finalize();
    return 0;
}
