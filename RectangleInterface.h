/** RectangleInterface Code*/

#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

//  Listing 2
/** @file RectangleInterface.h */

class RectangleInterface
{
public:
	/** Updates the length and width of this Rectang
	@param  newLength the new length for this Rectangle
    @param  newWidth the new width for this Rectangle
	@pre    newLength and newWidth must be larger than zero
	@post   If newLength and newWidth are valid, the length
	        of this object is set to newLength and the width is
            set to newWidth
			Otherwise, the Rectangle is not updated 
	@return True if this object is updated,
	        and false otherwise. */

     
     
	virtual void set(double newLength, double newWidth) = 0;
	
	/** Gets the length of this Rectangle
	@return The length of this Rectangle. */
	virtual double getLength() const = 0;
	
    /** Gets the width of this Rectangle
	@return The width of this Rectangle. */
	virtual double getWidth() const = 0;
    
	/** Gets the area of this Circle
	 @return The area of this Circle. */
	virtual double getArea() const = 0;

	/** Destroys this Circle and frees its assigned memory. */
	virtual ~CircleInterface() {}
};
#endif