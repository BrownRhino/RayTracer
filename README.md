# RayTracer
Raymond the Tracer, part of a graphics assignment

RAY TRACE README
SAHIBDEEP SRAN

This assignment required us to build a ray tracer.  This means we build a scene and shoot rays through a grid plane in order to 
build a high quality picture of our scene.  

Classes:

I created several C++ classes for this assignment.  These include the following with a brief description:

Ray: Represents a ray that is shot into our scene.

HitStuff: A record of one hit between a ray and object.

Intersection:  A record of all the hits between a ray and an object.

Light:  Contains information about a light source in our scene

Scene:  Sets up a scene that we wish to ray trace.

Sphere:  Defines a sphere that can be ray traced.

Plane:  Defines a plane that can be ray traced. 

Triangle:  Defines a triangle that can be ray traced.


Objects in My Scene:

The scene consists of one point light source, a sphere, a pyramid, and a room containing every thing.  The light source 
is moveable in the UI.  

User Interface:

The user interface allows you to do things such as open an image, make an image, and save an image.
To open an image press the open image button and select an image you wish to open.  To save an image, press the save image
button and you can save an image onto your computer.  To render the image you set up for your scene, press the make 
image button.  You can also control the lights in the user interface.  To move the lights you can use the scroll button next to 
the axis you wish to move the light on or type in a value.  Once you're finished setting your values, you can press make image to 
render your image with the light in a new position.  Some light positions are restricted by the UI but in general 
you can move your light throughout the room.  You can press the quit button to quit the user interface at any time.
You can adjust the light position to any place you want in the code.

Other Features:

The program currently shoots 9 rays per pixel but this can be adjusted in the code to shoot more or less.  The room is composed
entirely of triangles as is the pyramid.


How to Run:

Enter the folder named Almost Over and continue entering folders until you reach one called lab7qtproj.  Open that folder 
then open the file that says lab7.pro within it.  Once that file is run the program using the run command on the bottom left
hand corner of the qt window.


Features implemented

Put the sphere inside a room-like space (a cube without one side) and render the 5 visible
ways with different colours.

Cast sufficient number of rays so the rendered image is correctly anti-aliased.

Cast the shadow from the sphere onto those walls.

Model and ray tracing a triangle mesh, for example a cube, in the same scene.
