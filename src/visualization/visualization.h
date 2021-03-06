//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
\file    visualization.h
\brief   Helper functions for visualizations
\author  Joydeep Biswas, (C) 2019
*/
//========================================================================

#include <stdint.h>

#include <string>

#include "eigen3/Eigen/Dense"
#include "f1tenth_course/VisualizationMsg.h"

namespace visualization {

// Clear all elements in the message.
void ClearVisualizationMsg(f1tenth_course::VisualizationMsg& msg);

// Return new visualization message, with initialized headers and namespace.
f1tenth_course::VisualizationMsg NewVisualizationMessage(
    const std::string& frame, const std::string& ns);

// Add a single point to the visualization message.
void DrawPoint(const Eigen::Vector2f& p,
               uint32_t color,
               f1tenth_course::VisualizationMsg& msg);

// Add a single line to the visualization message.
void DrawLine(const Eigen::Vector2f& p0,
              const Eigen::Vector2f& p1,
              uint32_t color,
              f1tenth_course::VisualizationMsg& msg);

// Add a "X" to the visualization message.
void DrawCross(const Eigen::Vector2f& location,
               float size,
               uint32_t color,
               f1tenth_course::VisualizationMsg& msg);

// Add a single line to the visualization message.
void DrawArc(const Eigen::Vector2f& center,
             float radius,
             float start_angle,
             float end_angle,
             uint32_t color,
             f1tenth_course::VisualizationMsg& msg);

// Add a particle to the visualization message.
void DrawParticle(const Eigen::Vector2f& loc,
                  float angle,
                  f1tenth_course::VisualizationMsg& msg);

void DrawPathOption(const float curvature,
                    const float distance,
                    const float clearance,
                    f1tenth_course::VisualizationMsg& msg);

}  // namespace visualization
