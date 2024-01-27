/** RectangleInterface Code*/

#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

//  Listing 2
/** @file RectangleInterface.h */

class RectangleInterface
{
public:
	/** Updates the length and width of this Rectang
	@param  newLength the new length and new width for this Rectangle
	@pre    newLength and newWidth must be larger than zero
	@post   If newLength and newWidth are valid, the length
	        of this object is set to newLength and the width is
            set to newWidth
			Otherwise, the Rectangle is not updated 
	@return True if this object is updated,
	        and false otherwise. */

     
     
	virtual void set(double newLength, double newHeight) = 0;
	
	/** Gets the radius  of this Circle
	@return The radius of this Circle. */
	virtual double getRadius() const = 0;
	
	/** Gets the area  of this Circle
	 @return The area of this Circle. */
	virtual double getArea() const = 0;

	/** Destroys this Circle and frees its assigned memory. */
	virtual ~CircleInterface() {}
};
#endif