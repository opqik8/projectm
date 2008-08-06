/*
 * Preset.hpp
 *
 *  Created on: Aug 5, 2008
 *      Author: carm
 */

#ifndef PRESET_HPP_
#define PRESET_HPP_

#include <string>

#include "BeatDetect.hpp"
#include "Pipeline.hpp"
#include "PipelineContext.hpp"

class Preset {
public:

	Preset();
	Preset(const std::string & name, const std::string & author);
	virtual ~Preset();

	void setName(const std::string & value);
	const std::string & name() const;

	void setAuthor(const std::string & value);
	const std::string & author() const;

	virtual const Pipeline & pipeline() const = 0;
	virtual void Render(const BeatDetect &music, const PipelineContext &context) = 0;

private:
	std::string _name;
	std::string _author;
};

#endif /* PRESET_HPP_ */
